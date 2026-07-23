/*
 * XREFs of HvpGrowDirtyVectors @ 0x1400BD380
 * Callers:
 *     HvpAddBin @ 0x140566210 (HvpAddBin.c)
 *     HvpPerformLogFileRecovery @ 0x1406F86F4 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     RtlClearBits @ 0x140072BD0 (RtlClearBits.c)
 *     RtlCopyBitMap @ 0x1400BD530 (RtlCopyBitMap.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall HvpGrowDirtyVectors(__int64 a1, unsigned int a2)
{
  _RTL_BITMAP *v2; // r14
  ULONG v3; // r15d
  unsigned int v5; // ebp
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int *v11; // r12
  unsigned int *v12; // rax
  ULONG v13; // r13d
  unsigned int *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rcx
  _RTL_BITMAP Destination; // [rsp+20h] [rbp-48h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp-38h] BYREF
  unsigned int *v19; // [rsp+70h] [rbp+8h]

  v2 = (_RTL_BITMAP *)(a1 + 88);
  v3 = *(_DWORD *)(a1 + 88);
  v5 = a2 >> 9;
  v6 = ((a2 >> 12) + 3) & 0xFFFFFFFC;
  if ( *(_DWORD *)(a1 + 108) < v6 )
  {
    v9 = 0;
    v11 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 24))(v6, 0LL, 959532355LL);
    if ( v11 )
    {
      v12 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 24))(v6, 0LL, 959532355LL);
      v19 = v12;
      if ( v12 )
      {
        BitMapHeader.Buffer = v12;
        v13 = v5 - v3;
        Destination.SizeOfBitMap = v5;
        Destination.Buffer = v11;
        BitMapHeader.SizeOfBitMap = v5;
        if ( *(_QWORD *)(a1 + 96) )
        {
          RtlCopyBitMap(v2, &Destination, 0);
          RtlClearBits(&Destination, v3, v13);
        }
        else
        {
          memset(v11, 0, v6);
        }
        if ( *(_QWORD *)(a1 + 120) )
        {
          RtlCopyBitMap((PRTL_BITMAP)(a1 + 112), &BitMapHeader, 0);
          RtlClearBits(&BitMapHeader, v3, v13);
          v14 = v19;
        }
        else
        {
          v14 = v19;
          memset(v19, 0, v6);
        }
        v15 = *(_QWORD *)(a1 + 96);
        if ( v15 )
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v15, *(unsigned int *)(a1 + 108));
        v16 = *(_QWORD *)(a1 + 120);
        if ( v16 )
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v16, *(unsigned int *)(a1 + 108));
        v2->SizeOfBitMap = v5;
        v2->Buffer = v11;
        *(_DWORD *)(a1 + 112) = v5;
        *(_QWORD *)(a1 + 120) = v14;
        *(_DWORD *)(a1 + 108) = v6;
      }
      else
      {
        v9 = -1073741670;
        (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 32))(v11, v6);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 96);
    v2->SizeOfBitMap = v5;
    *(_QWORD *)(a1 + 96) = v7;
    RtlClearBits((PRTL_BITMAP)(a1 + 88), v3, v5 - v3);
    v8 = *(_QWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 112) = v5;
    *(_QWORD *)(a1 + 120) = v8;
    RtlClearBits((PRTL_BITMAP)(a1 + 112), v3, v5 - v3);
    return 0;
  }
  return v9;
}
