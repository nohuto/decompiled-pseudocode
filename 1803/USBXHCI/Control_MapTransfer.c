/*
 * XREFs of Control_MapTransfer @ 0x1C0021D80
 * Callers:
 *     Control_EP_StartMapping @ 0x1C0021A60 (Control_EP_StartMapping.c)
 *     Control_WdfEvtIoDefault @ 0x1C0023FB0 (Control_WdfEvtIoDefault.c)
 * Callees:
 *     TR_AcquireDoubleBuffer @ 0x1C001F864 (TR_AcquireDoubleBuffer.c)
 *     TR_IsUrbUsingChainedMdl @ 0x1C0020E84 (TR_IsUrbUsingChainedMdl.c)
 *     Control_Transfer_CompleteCancelable @ 0x1C0022DA0 (Control_Transfer_CompleteCancelable.c)
 *     Control_Transfer_ConfigureBuffer @ 0x1C0022EF4 (Control_Transfer_ConfigureBuffer.c)
 *     Control_Transfer_Map @ 0x1C0023108 (Control_Transfer_Map.c)
 *     Control_Transfer_ValidateBuffer @ 0x1C0023A30 (Control_Transfer_ValidateBuffer.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

void __fastcall Control_MapTransfer(__int64 a1, char a2)
{
  __int64 v2; // rdi
  unsigned int v5; // r8d
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // r8d
  _QWORD *v9; // rax
  bool v10; // zf
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rdx
  char v14; // di
  __int64 v15; // rdx
  __int64 v16; // rcx

  v2 = *(_QWORD *)(a1 + 344);
  v5 = *(_DWORD *)(v2 + 104);
  v6 = *(_QWORD *)(v2 + 48);
  if ( v5 )
  {
    if ( !*(_BYTE *)(a1 + 320) || v5 > 8 || (*(_DWORD *)(v6 + 32) & 1) != 0 )
    {
      if ( TR_IsUrbUsingChainedMdl(v6)
        || v8 > *(_DWORD *)(a1 + 24)
        || (v9 = TR_AcquireDoubleBuffer(a1), *(_QWORD *)(v2 + 88) = v9, v10 = v9 == 0LL, v7 = 2, v10) )
      {
        v7 = 3;
      }
    }
    else
    {
      v7 = 1;
    }
  }
  else
  {
    v7 = 0;
  }
  *(_DWORD *)(v2 + 64) = v7;
  v11 = Control_Transfer_ConfigureBuffer(a1);
  if ( v11 < 0
    || (v11 = Control_Transfer_ValidateBuffer(a1), v11 < 0)
    || (LOBYTE(v12) = a2, v11 = Control_Transfer_Map(a1, v12), v11 < 0) )
  {
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_DWORD *)(*(_QWORD *)(a1 + 344) + 120LL) = v11;
    if ( *(_DWORD *)(a1 + 108) == 3 )
    {
      v14 = 0;
      *(_DWORD *)(a1 + 108) = 2;
      LOBYTE(v13) = a2;
      Control_Transfer_CompleteCancelable(a1, v13);
    }
    else
    {
      *(_DWORD *)(a1 + 108) = 0;
      v14 = 1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    if ( v14 )
    {
      v15 = *(_QWORD *)(a1 + 56);
      if ( !*(_BYTE *)(v15 + 37)
        || (v16 = *(_QWORD *)(v15 + 136),
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 20)) == *(_DWORD *)(v16 + 8)) )
      {
        ESM_AddEvent((PVOID)(v15 + 288));
      }
    }
  }
}
