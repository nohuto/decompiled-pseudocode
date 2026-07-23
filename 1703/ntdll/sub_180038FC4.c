/*
 * XREFs of sub_180038FC4 @ 0x180038FC4
 * Callers:
 *     sub_180011E90 @ 0x180011E90 (sub_180011E90.c)
 *     sub_180039848 @ 0x180039848 (sub_180039848.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180038624 @ 0x180038624 (sub_180038624.c)
 *     sub_1800391F0 @ 0x1800391F0 (sub_1800391F0.c)
 *     sub_180039214 @ 0x180039214 (sub_180039214.c)
 *     sub_1800831CC @ 0x1800831CC (sub_1800831CC.c)
 *     sub_1800893F0 @ 0x1800893F0 (sub_1800893F0.c)
 *     sub_1801063D4 @ 0x1801063D4 (sub_1801063D4.c)
 */

__int64 __fastcall sub_180038FC4(__int64 a1, _DWORD *a2, int a3)
{
  unsigned int v4; // ebx
  char *v5; // rdi
  _DWORD *pShimData; // rcx
  _OWORD *v8; // r15
  _DWORD *v9; // r8
  __int64 v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // rax
  __int64 v14; // rcx
  _DWORD *v15; // r8
  __int64 v16; // rax
  signed __int32 v17; // ecx
  __int128 v18; // xmm0
  signed __int32 v19; // ecx
  REGHANDLE v20; // rcx
  _DWORD *v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v24; // [rsp+88h] [rbp+38h] BYREF
  REGHANDLE RegHandle; // [rsp+98h] [rbp+48h] BYREF

  v24 = a2;
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
  v22 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( v5 && a1 )
  {
    sub_1800391F0(4LL, &v22);
    if ( !*((_DWORD *)v5 + 2) )
      return 1;
    v8 = v5 + 64;
    sub_180039214(v5 + 64, &v21);
    if ( a3 )
    {
      v4 = 1;
      if ( a3 == 1 )
      {
        v14 = *(_QWORD *)(a1 + 192);
        if ( v14 )
        {
          sub_180039214(v14, &v24);
          v15 = v24;
          v16 = 0LL;
          while ( *((_DWORD *)&unk_180158D90 + 2 * v16) != *v24 )
          {
            if ( (unsigned __int64)++v16 >= 5 )
            {
              v17 = 0;
              goto LABEL_27;
            }
          }
          v19 = _InterlockedExchangeAdd((volatile signed __int32 *)&unk_180158D90 + 2 * v16 + 1, 0xFFFFFFFF);
          v15 = v24;
          v17 = v19 - 1;
LABEL_27:
          if ( !v17 && v21 == v15 )
          {
            RtlAcquireSRWLockExclusive(&stru_18015C388);
            if ( (unsigned int)sub_1800893F0(&v23) == 1 )
              v18 = *(_OWORD *)(v23 + 4);
            else
              v18 = *((_OWORD *)v5 + 3);
            *v8 = v18;
            ++*(_QWORD *)v5;
            if ( !(unsigned int)sub_1800831CC(&RegHandle) )
              goto LABEL_20;
            v20 = RegHandle;
            if ( !RegHandle )
              goto LABEL_20;
LABEL_40:
            sub_1801063D4(v20, *(_QWORD *)(a1 + 80));
LABEL_20:
            ++*(_QWORD *)v5;
            RtlReleaseSRWLockExclusive(&stru_18015C388);
          }
        }
      }
    }
    else
    {
      v4 = sub_180038624(*(PACTIVATION_CONTEXT *)(a1 + 48), &v24);
      if ( v4 )
      {
        v9 = v24;
        v10 = 0LL;
        v11 = v24 + 1;
        *(_QWORD *)(a1 + 192) = v24 + 1;
        v4 = 1;
        while ( *((_DWORD *)&unk_180158D90 + 2 * v10) != *v9 )
        {
          if ( (unsigned __int64)++v10 >= 5 )
            goto LABEL_12;
        }
        _InterlockedAdd((volatile signed __int32 *)&unk_180158D90 + 2 * v10 + 1, 1u);
        v9 = v24;
LABEL_12:
        v12 = *v11 - *(_QWORD *)(v22 + 4);
        if ( *v11 == *(_QWORD *)(v22 + 4) )
          v12 = v11[1] - *(_QWORD *)(v22 + 12);
        if ( v12
          && *v9 < *v21
          && (*((unsigned __int16 *)v9 + 11) | ((unsigned __int64)*((unsigned __int16 *)v9 + 10) << 16)) >= *((_QWORD *)v5 + 5) )
        {
          RtlAcquireSRWLockExclusive(&stru_18015C388);
          ++*(_QWORD *)v5;
          *v8 = *(_OWORD *)v11;
          if ( !(unsigned int)sub_1800831CC(&RegHandle) )
            goto LABEL_20;
          v20 = RegHandle;
          if ( !RegHandle )
            goto LABEL_20;
          goto LABEL_40;
        }
      }
    }
  }
  return v4;
}
