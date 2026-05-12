/*
 * XREFs of PortMiniportRegistryRead @ 0x1C0047CA0
 * Callers:
 *     StorPortRegistryRead @ 0x1C0030EE0 (StorPortRegistryRead.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018140 (memset.c)
 */

__int64 __fastcall PortMiniportRegistryRead(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // rax
  _BYTE *v9; // r14
  int v10; // eax
  int *v11; // rcx
  __int64 v12; // rbx
  PVOID SystemRoutineAddress; // rax
  unsigned int v14; // r12d
  unsigned int v15; // edx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  _WORD *v18; // rdx
  __int64 v19; // rbx
  int v20; // ecx
  unsigned int i; // eax
  int v22; // eax
  __int64 v24; // [rsp+30h] [rbp-59h] BYREF
  PVOID P; // [rsp+38h] [rbp-51h]
  _QWORD v26[14]; // [rsp+40h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp+27h] BYREF
  int v28; // [rsp+F0h] [rbp+67h] BYREF
  int v29; // [rsp+100h] [rbp+77h] BYREF

  v28 = 0;
  v29 = -1;
  memset(v26, 0, sizeof(v26));
  v8 = *(_QWORD *)(a2 + 8);
  v9 = (_BYTE *)(*(_QWORD *)(a4 + 32) + *(unsigned int *)(a4 + 52));
  LODWORD(v26[4]) = 0;
  v26[2] = v8;
  v10 = 20;
  LODWORD(v26[1]) = 20;
  if ( a3 == 1 )
  {
    v24 = 0LL;
    P = 0LL;
    v10 = 52;
    v26[3] = &v24;
    v11 = &v28;
    LODWORD(v26[1]) = 52;
  }
  else
  {
    if ( a3 == 4 )
    {
      v10 = 52;
      v26[3] = v9;
      LODWORD(v26[1]) = 52;
    }
    else
    {
      v26[3] = a4;
      v26[0] = &PortpBinaryReadCallBack;
    }
    v11 = &v29;
  }
  v26[5] = v11;
  LODWORD(v26[6]) = 4;
  if ( (v10 & 0x20) != 0 )
  {
    LODWORD(v26[1]) = v10 | 0x100;
    LODWORD(v26[4]) = a3 << 24;
  }
  v12 = *(_QWORD *)(a1 + 8);
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  v14 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD *, _QWORD, _QWORD))SystemRoutineAddress)(
          0LL,
          v12,
          v26,
          0LL,
          0LL);
  if ( (v14 & 0x80000000) != 0 )
    goto LABEL_30;
  if ( a3 != 1 )
  {
    if ( a3 == 4 )
    {
      *(_DWORD *)(a4 + 44) = 4;
      return v14;
    }
    if ( *(_DWORD *)(a4 + 60) != -1073741789 )
      return v14;
    v14 = -1073741789;
LABEL_30:
    v22 = *(_DWORD *)(a4 + 44);
    *(_DWORD *)(a4 + 44) = 0;
    *(_DWORD *)(a4 + 48) = v22;
    return v14;
  }
  if ( (_WORD)v24 && (v15 = *(_DWORD *)(a4 + 44), v16 = (unsigned __int16)v24 >> 1, v16 < v15) )
  {
    v17 = v16 + 1;
    if ( WORD1(v24) - (unsigned int)(unsigned __int16)v24 >= 2 && *((_WORD *)P + v17 - 1) && v17 < v15 )
      ++v17;
    memset(v9, 0, *(unsigned int *)(a4 + 44));
    v18 = P;
    v19 = v17 - 1;
    v20 = 0;
    v9[v19] = 0;
    if ( v18 )
    {
      for ( i = 0; i < (unsigned int)v19; ++v20 )
      {
        if ( !*v18 )
          break;
        *v9++ = *v18++;
        ++i;
      }
    }
  }
  else
  {
    v14 = -1073741789;
    v20 = 0;
    *(_DWORD *)(a4 + 48) = ((unsigned int)(unsigned __int16)v24 + 1) >> 1;
  }
  *(_DWORD *)(a4 + 44) = v20;
  ExFreePoolWithTag(P, 0);
  return v14;
}
