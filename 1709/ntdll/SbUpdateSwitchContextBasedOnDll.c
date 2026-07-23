/*
 * XREFs of SbUpdateSwitchContextBasedOnDll @ 0x1800210F4
 * Callers:
 *     LdrpUnloadNode @ 0x180010B14 (LdrpUnloadNode.c)
 *     LdrpSendPostSnapNotifications @ 0x180020F14 (LdrpSendPostSnapNotifications.c)
 * Callees:
 *     SbpDetermineDllContext @ 0x180020CFC (SbpDetermineDllContext.c)
 *     SbGetContextDetailsById @ 0x180020E68 (SbGetContextDetailsById.c)
 *     SbGetContextDetailsByGuid @ 0x180021334 (SbGetContextDetailsByGuid.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     SbObtainTraceHandle @ 0x1800818D8 (SbObtainTraceHandle.c)
 *     SbpTraceContextUpdate @ 0x18010B4D8 (SbpTraceContextUpdate.c)
 */

__int64 __fastcall SbUpdateSwitchContextBasedOnDll(__int64 a1, _DWORD *a2, int a3)
{
  unsigned int v4; // ebx
  char *v5; // rdi
  _DWORD *pShimData; // rcx
  _OWORD *v8; // r15
  _DWORD *v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // rax
  __int64 v14; // rcx
  _DWORD *v15; // r8
  __int64 v16; // rax
  signed __int32 v17; // edx
  _DWORD *v18; // rax
  unsigned int i; // ecx
  __int128 v20; // xmm0
  signed __int32 v21; // edx
  REGHANDLE v22; // rcx
  _DWORD *v23; // [rsp+30h] [rbp-10h] BYREF
  __int64 v24; // [rsp+38h] [rbp-8h] BYREF
  _DWORD *v25; // [rsp+78h] [rbp+38h] BYREF
  REGHANDLE RegHandle; // [rsp+88h] [rbp+48h] BYREF

  v25 = a2;
  v4 = 0;
  v5 = 0LL;
  pShimData = NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v5 = (char *)(pShimData + 374);
    if ( pShimData == (_DWORD *)-1496LL || !pShimData[386] )
      v5 = 0LL;
  }
  RegHandle = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  if ( v5 && a1 )
  {
    if ( !*((_DWORD *)v5 + 2) )
      return 1;
    v8 = v5 + 64;
    SbGetContextDetailsByGuid(v5 + 64, &v23);
    if ( a3 )
    {
      v4 = 1;
      if ( a3 == 1 )
      {
        v14 = *(_QWORD *)(a1 + 192);
        if ( v14 )
        {
          SbGetContextDetailsByGuid(v14, &v25);
          v15 = v25;
          v16 = 0LL;
          while ( *((_DWORD *)&SbDynamicContextDllCount + 2 * v16) != *v25 )
          {
            if ( (unsigned __int64)++v16 >= 5 )
            {
              v17 = 0;
              goto LABEL_22;
            }
          }
          v21 = _InterlockedExchangeAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v16 + 1, 0xFFFFFFFF);
          v15 = v25;
          v17 = v21 - 1;
LABEL_22:
          if ( !v17 && v23 == v15 )
          {
            RtlAcquireSRWLockExclusive(&SbpContextLock);
            v24 = 0LL;
            v18 = &unk_18015CDC4;
            for ( i = 0; i < 5; ++i )
            {
              if ( *v18 )
                break;
              v18 += 2;
            }
            if ( i >= 5 )
            {
              v20 = *((_OWORD *)v5 + 3);
            }
            else
            {
              SbGetContextDetailsById(i, &v24);
              v20 = *(_OWORD *)(v24 + 4);
            }
            *v8 = v20;
            ++*(_QWORD *)v5;
            if ( !(unsigned int)SbObtainTraceHandle(&RegHandle) )
              goto LABEL_35;
            v22 = RegHandle;
            if ( !RegHandle )
              goto LABEL_35;
LABEL_43:
            SbpTraceContextUpdate(v22, *(_QWORD *)(a1 + 80));
LABEL_35:
            ++*(_QWORD *)v5;
            RtlReleaseSRWLockExclusive(&SbpContextLock);
          }
        }
      }
    }
    else
    {
      v4 = SbpDetermineDllContext(*(PACTIVATION_CONTEXT *)(a1 + 48), &v25);
      if ( v4 )
      {
        v9 = v25;
        v10 = 0LL;
        v11 = v25 + 1;
        *(_QWORD *)(a1 + 192) = v25 + 1;
        v4 = 1;
        while ( *((_DWORD *)&SbDynamicContextDllCount + 2 * v10) != *v9 )
        {
          if ( (unsigned __int64)++v10 >= 5 )
            goto LABEL_12;
        }
        _InterlockedAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v10 + 1, 1u);
        v9 = v25;
LABEL_12:
        v12 = *v11 - 0x4FE8BFB38E0F7A12LL;
        if ( *v11 == 0x4FE8BFB38E0F7A12LL )
          v12 = v11[1] + 0x65A55EAF02B75A47LL;
        if ( v12
          && *v9 < *v23
          && (*((unsigned __int16 *)v9 + 11) | ((unsigned __int64)*((unsigned __int16 *)v9 + 10) << 16)) >= *((_QWORD *)v5 + 5) )
        {
          RtlAcquireSRWLockExclusive(&SbpContextLock);
          ++*(_QWORD *)v5;
          *v8 = *(_OWORD *)v11;
          if ( !(unsigned int)SbObtainTraceHandle(&RegHandle) )
            goto LABEL_35;
          v22 = RegHandle;
          if ( !RegHandle )
            goto LABEL_35;
          goto LABEL_43;
        }
      }
    }
  }
  return v4;
}
