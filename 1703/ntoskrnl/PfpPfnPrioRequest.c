/*
 * XREFs of PfpPfnPrioRequest @ 0x1405206B0
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x14052B3F0 (PfQuerySuperfetchInformation.c)
 *     PfSetSuperfetchInformation @ 0x1405630D4 (PfSetSuperfetchInformation.c)
 * Callees:
 *     MmSetPfnListPriorities @ 0x1400139B0 (MmSetPfnListPriorities.c)
 *     MiIdentifyPfnWrapper @ 0x1400DBBE0 (MiIdentifyPfnWrapper.c)
 *     MiIsPfn @ 0x1400DC8A0 (MiIsPfn.c)
 *     MmQueryMemoryListInformation @ 0x1400DD920 (MmQueryMemoryListInformation.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PfpCopyUserPfnPrioRequest @ 0x140520D70 (PfpCopyUserPfnPrioRequest.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     MmRelocatePfnList @ 0x1406BF984 (MmRelocatePfnList.c)
 *     ExRaiseAccessViolation @ 0x14071ED40 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfpPfnPrioRequest(__int64 a1, char a2, unsigned int *a3)
{
  _OWORD *v5; // rsi
  int v6; // r8d
  unsigned int v7; // edx
  __int64 v8; // r9
  int v9; // r15d
  char *v10; // rbx
  char *v11; // rdi
  __int64 v12; // r10
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned int v16; // ebx
  unsigned int v18; // edx
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  _DWORD *v22; // [rsp+38h] [rbp-40h]
  __int64 v23; // [rsp+80h] [rbp+8h] BYREF
  unsigned int *v24; // [rsp+90h] [rbp+18h]
  void *Src; // [rsp+98h] [rbp+20h] BYREF

  v24 = a3;
  v5 = 0LL;
  Src = 0LL;
  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 == 6 )
  {
    v7 = *(_DWORD *)(a1 + 24);
    if ( v7 < 0xD8 )
    {
      v9 = -1073741306;
      goto LABEL_24;
    }
    v9 = PfpCopyUserPfnPrioRequest(*(_QWORD *)(a1 + 16), v7, 6, (unsigned int)&Src, a2, 1);
    if ( v9 >= 0 )
    {
      v5 = Src;
      v10 = (char *)Src + 192;
      v22 = (char *)Src + 8;
      v9 = 0;
      v11 = (char *)Src + 24 * *((_QWORD *)Src + 1) + 192;
      if ( (char *)Src + 192 < v11 )
      {
        while ( MiIsPfn(*((_QWORD *)v10 + 1)) )
        {
          MiIdentifyPfnWrapper(v12 + 48 * v8, (__int64)v10);
          v10 += 24;
          if ( v10 >= v11 )
            goto LABEL_7;
        }
        *((_QWORD *)v10 + 2) |= 2uLL;
        v9 = -1073741584;
      }
LABEL_7:
      if ( v9 >= 0 && (*((_DWORD *)v5 + 1) & 1) != 0 )
        MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, v5 + 1, 0xB0u, v8, &v23);
      if ( a2 )
      {
        v13 = *(_QWORD *)(a1 + 16);
        if ( *(_DWORD *)(a1 + 24) )
        {
          if ( (v13 & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          v14 = v13 + *(unsigned int *)(a1 + 24) - 1LL;
          if ( v13 > v14 || v14 >= 0x7FFFFFFF0000LL )
          {
            if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
              ExRaiseAccessViolation();
            v5 = Src;
          }
          else
          {
            v15 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
            do
            {
              *(_BYTE *)v13 = *(_BYTE *)v13;
              v13 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
            }
            while ( v13 != v15 );
            v5 = Src;
          }
        }
      }
      v16 = 24 * (*v22 + 8);
      memmove(*(void **)(a1 + 16), v5, v16);
      goto LABEL_23;
    }
  }
  else
  {
    if ( v6 != 7 && v6 != 22 )
    {
      v9 = -1073741821;
      goto LABEL_24;
    }
    v18 = *(_DWORD *)(a1 + 24);
    if ( v18 < 0xD8 )
    {
      v9 = -1073741306;
      goto LABEL_24;
    }
    v9 = PfpCopyUserPfnPrioRequest(*(_QWORD *)(a1 + 16), v18, v6, (unsigned int)&Src, a2, 0);
    if ( v9 >= 0 )
    {
      v5 = Src;
      v19 = (char *)Src + 192;
      v20 = *((_QWORD *)Src + 1);
      if ( *(_DWORD *)(a1 + 8) == 7 )
        v21 = MmSetPfnListPriorities(v20, v19);
      else
        v21 = MmRelocatePfnList(v20, v19, *((unsigned __int16 *)Src + 2), *((unsigned __int16 *)Src + 3));
      v9 = v21;
      if ( a2 )
        ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
      v16 = 24 * (*((_DWORD *)v5 + 2) + 8);
      memmove(*(void **)(a1 + 16), v5, v16);
LABEL_23:
      *v24 = v16;
      goto LABEL_24;
    }
  }
  v5 = Src;
LABEL_24:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v9;
}
