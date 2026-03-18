/*
 * XREFs of ACPIFanCompletePendingIrps @ 0x1C004D3F4
 * Callers:
 *     ACPIFanLoop @ 0x1C004DC04 (ACPIFanLoop.c)
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C00055B0 (WPP_RECORDER_SF_qqss.c)
 */

char __fastcall ACPIFanCompletePendingIrps(__int64 a1, char a2)
{
  KSPIN_LOCK *v3; // rbp
  char v4; // di
  KIRQL v6; // r10
  _QWORD *v7; // r8
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  char v10; // al
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  _QWORD *v15; // rsi
  IRP *v16; // rdi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rdx
  const char *v19; // rdx
  __int64 v20; // rax
  const char *v21; // rcx
  _QWORD *v23; // [rsp+50h] [rbp-18h] BYREF
  _QWORD **v24; // [rsp+58h] [rbp-10h]

  v24 = &v23;
  v3 = (KSPIN_LOCK *)(a1 + 184);
  v4 = 0;
  v23 = &v23;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v7 = *(_QWORD **)(a1 + 216);
  while ( v7 != (_QWORD *)(a1 + 216) )
  {
    v8 = v7 - 21;
    v7 = (_QWORD *)*v7;
    v9 = v8[3];
    if ( (a2 || *(_DWORD *)v9 != *(_DWORD *)(a1 + 288)) && _InterlockedExchange64(v8 + 13, 0LL) )
    {
      *(_DWORD *)v9 = *(_DWORD *)(a1 + 288);
      if ( *(_DWORD *)(a1 + 336) == 1 || (v10 = 0, *(_BYTE *)(a1 + 284)) )
        v10 = 1;
      *(_BYTE *)(v9 + 4) = v10;
      v11 = v8 + 21;
      v8[7] = 8LL;
      *((_DWORD *)v8 + 12) = 0;
      v12 = v8[21];
      if ( *(_QWORD **)(v12 + 8) != v8 + 21 || (v13 = (_QWORD *)v8[22], (_QWORD *)*v13 != v11) )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      v14 = v24;
      if ( *v24 != &v23 )
        __fastfail(3u);
      v11[1] = v24;
      *v11 = &v23;
      *v14 = v11;
      v24 = (_QWORD **)v11;
      break;
    }
  }
  KeReleaseSpinLock(v3, v6);
  v15 = v23;
  while ( v15 != &v23 )
  {
    v16 = (IRP *)(v15 - 21);
    v15 = (_QWORD *)*v15;
    Flink = v16->Tail.Overlay.ListEntry.Flink;
    if ( (void **)Flink->Blink != &v16->Tail.CompletionKey + 6
      || (Blink = v16->Tail.Overlay.ListEntry.Blink, (void **)Blink->Flink != &v16->Tail.CompletionKey + 6) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    v19 = (const char *)&unk_1C0067B08;
    v20 = *(_QWORD *)(a1 + 8);
    v21 = (const char *)&unk_1C0067B08;
    if ( (v20 & 0x200000000000LL) != 0 )
    {
      v19 = *(const char **)(a1 + 560);
      if ( (v20 & 0x400000000000LL) != 0 )
        v21 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x10u,
      0x14u,
      (__int64)&WPP_c4ce4549a8103c4f89a2f46d9050f7e8_Traceguids,
      (char)v16,
      a1,
      v19,
      v21);
    IofCompleteRequest(v16, 0);
    v4 = 1;
  }
  return v4;
}
