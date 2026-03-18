/*
 * XREFs of ACPIFanCompletePendingIrps @ 0x1C0023834
 * Callers:
 *     ACPIFanLoop @ 0x1C0024034 (ACPIFanLoop.c)
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C0008CB0 (WPP_RECORDER_SF_qqss.c)
 */

char __fastcall ACPIFanCompletePendingIrps(__int64 a1, char a2)
{
  KSPIN_LOCK *v3; // rbp
  char v4; // di
  KIRQL v6; // r11
  _QWORD *v7; // r8
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // r9
  char v11; // al
  __int64 v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rsi
  _QWORD *v16; // rax
  IRP *v17; // rdi
  _QWORD *v18; // rcx
  _QWORD *v19; // rdx
  const char *v20; // rcx
  __int64 v21; // rax
  const char *v22; // rdx
  _QWORD *v24; // [rsp+50h] [rbp-18h] BYREF
  _QWORD **v25; // [rsp+58h] [rbp-10h]

  v25 = &v24;
  v3 = (KSPIN_LOCK *)(a1 + 184);
  v4 = 0;
  v24 = &v24;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v7 = *(_QWORD **)(a1 + 216);
  while ( 1 )
  {
    v8 = v7;
    if ( v7 == (_QWORD *)(a1 + 216) )
      break;
    v9 = v7 - 21;
    v7 = (_QWORD *)*v7;
    v10 = v9[3];
    if ( (a2 || *(_DWORD *)v10 != *(_DWORD *)(a1 + 288)) && _InterlockedExchange64(v9 + 13, 0LL) )
    {
      *(_DWORD *)v10 = *(_DWORD *)(a1 + 288);
      if ( *(_DWORD *)(a1 + 336) == 1 || (v11 = 0, *(_BYTE *)(a1 + 284)) )
        v11 = 1;
      *(_BYTE *)(v10 + 4) = v11;
      v9[7] = 8LL;
      *((_DWORD *)v9 + 12) = 0;
      v12 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v13 = (_QWORD *)v8[1], (_QWORD *)*v13 != v8) )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      v14 = v25;
      if ( *v25 != &v24 )
        __fastfail(3u);
      v8[1] = v25;
      *v8 = &v24;
      *v14 = v8;
      v25 = (_QWORD **)v8;
      break;
    }
  }
  KeReleaseSpinLock(v3, v6);
  v15 = v24;
  while ( v15 != &v24 )
  {
    v16 = (_QWORD *)*v15;
    v17 = (IRP *)(v15 - 21);
    v18 = v15;
    v15 = v16;
    if ( (_QWORD *)v16[1] != v18 || (v19 = (_QWORD *)v18[1], (_QWORD *)*v19 != v18) )
      __fastfail(3u);
    *v19 = v16;
    v20 = (const char *)&unk_1C005B1F0;
    v16[1] = v19;
    v21 = *(_QWORD *)(a1 + 8);
    v22 = (const char *)&unk_1C005B1F0;
    if ( (v21 & 0x200000000000LL) != 0 )
    {
      v22 = *(const char **)(a1 + 560);
      if ( (v21 & 0x400000000000LL) != 0 )
        v20 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x10u,
      0x14u,
      (__int64)&WPP_38ae480aa7ad381ffd3274338b02158a_Traceguids,
      (char)v17,
      a1,
      v22,
      v20);
    IofCompleteRequest(v17, 0);
    v4 = 1;
  }
  return v4;
}
