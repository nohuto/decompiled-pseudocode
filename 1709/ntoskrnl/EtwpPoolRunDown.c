/*
 * XREFs of EtwpPoolRunDown @ 0x14074DA54
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14074CFD4 (EtwpKernelTraceRundown.c)
 * Callees:
 *     ExGetSessionPoolTagInfo @ 0x140008A6C (ExGetSessionPoolTagInfo.c)
 *     EtwpLogKernelEvent @ 0x14000F4E0 (EtwpLogKernelEvent.c)
 *     MmGetSessionId @ 0x1400A5510 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x1400B15D0 (MmGetNextSession.c)
 *     MmDetachSession @ 0x1400B4910 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400B4990 (MmAttachSession.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExGetBigPoolInfo @ 0x14028451C (ExGetBigPoolInfo.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ExGetPoolTagInfo @ 0x140446F2C (ExGetPoolTagInfo.c)
 */

void __fastcall EtwpPoolRunDown(__int64 a1, char a2)
{
  int *v2; // rbx
  char v3; // r12
  unsigned int v4; // edi
  unsigned __int16 v6; // si
  int *PoolWithTag; // rax
  int PoolTagInfo; // eax
  unsigned int v9; // edi
  int *v10; // r14
  unsigned int v11; // r8d
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // edi
  int *v15; // rax
  int BigPoolInfo; // eax
  unsigned int v17; // edi
  int *v18; // r14
  unsigned int v19; // r8d
  __int64 v20; // rdx
  int v21; // eax
  void *j; // rcx
  unsigned int v23; // esi
  int *v24; // rax
  int SessionPoolTagInfo; // eax
  unsigned int v26; // esi
  int *v27; // r15
  unsigned int v28; // r8d
  __int64 v29; // rdx
  int v30; // eax
  unsigned int v31; // esi
  int *v32; // rax
  int v33; // eax
  int *v34; // r15
  unsigned int v35; // esi
  unsigned int v36; // r8d
  __int64 v37; // rdx
  int v38; // eax
  _KPROCESS *NextSession; // rax
  __int64 v40; // rdi
  unsigned int v42; // [rsp+3Ch] [rbp-45h] BYREF
  unsigned int i; // [rsp+40h] [rbp-41h] BYREF
  int SessionId; // [rsp+44h] [rbp-3Dh] BYREF
  int v45; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v46[48]; // [rsp+50h] [rbp-31h] BYREF
  unsigned int *v47; // [rsp+80h] [rbp-1h] BYREF
  int v48; // [rsp+88h] [rbp+7h]
  int v49; // [rsp+8Ch] [rbp+Bh]
  int *p_SessionId; // [rsp+90h] [rbp+Fh]
  int v51; // [rsp+98h] [rbp+17h]
  int v52; // [rsp+9Ch] [rbp+1Bh]
  int *v53; // [rsp+A0h] [rbp+1Fh]
  int v54; // [rsp+A8h] [rbp+27h]
  int v55; // [rsp+ACh] [rbp+2Bh]

  v2 = 0LL;
  v49 = 0;
  v47 = &v42;
  v3 = a2;
  v48 = 4;
  v4 = 48;
  i = 48;
  v6 = 3625 - (a2 != 0);
  while ( 1 )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, v4, 0x74777445u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    PoolTagInfo = ExGetPoolTagInfo(PoolWithTag, v4, (int *)&i);
    if ( PoolTagInfo != -1073741820 )
    {
      if ( PoolTagInfo >= 0 )
      {
        v9 = *v2;
        v10 = v2 + 2;
        if ( *v2 )
        {
          do
          {
            v11 = *(_DWORD *)a1;
            v12 = *(_QWORD *)(a1 + 2256);
            v13 = v9;
            p_SessionId = v10;
            if ( v9 > 0x64 )
              v13 = 100;
            v52 = 0;
            v42 = v13;
            v51 = 40 * v13;
            EtwpLogKernelEvent((__int64)&v47, v12, v11, 2u, v6, 0x401802u);
            v10 += 10 * v42;
            v9 -= v42;
          }
          while ( v9 );
          v3 = a2;
        }
      }
      break;
    }
    v4 = i;
  }
  v14 = 32;
  for ( i = 32; ; v14 = i )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    v15 = (int *)ExAllocatePoolWithTag(PagedPool, v14, 0x74777445u);
    v2 = v15;
    if ( !v15 )
      break;
    BigPoolInfo = ExGetBigPoolInfo(v15, v14, 1, &i);
    if ( BigPoolInfo != -1073741820 )
    {
      if ( BigPoolInfo >= 0 )
      {
        v17 = *v2;
        v18 = v2 + 2;
        if ( *v2 )
        {
          do
          {
            v19 = *(_DWORD *)a1;
            v20 = *(_QWORD *)(a1 + 2256);
            v21 = v17;
            p_SessionId = v18;
            if ( v17 > 0x64 )
              v21 = 100;
            v52 = 0;
            v42 = v21;
            v51 = 24 * v21;
            EtwpLogKernelEvent((__int64)&v47, v20, v19, 2u, 3627 - (v3 != 0), 0x401802u);
            v18 += 6 * v42;
            v17 -= v42;
          }
          while ( v17 );
          v3 = a2;
        }
      }
      break;
    }
  }
  for ( j = 0LL; ; j = (void *)v40 )
  {
    NextSession = (_KPROCESS *)MmGetNextSession(j);
    v40 = (__int64)NextSession;
    if ( !NextSession )
      break;
    if ( (int)MmAttachSession(NextSession, (__int64)v46) >= 0 )
    {
      SessionId = MmGetSessionId(v40);
      v23 = 4000;
      while ( 1 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0);
        v24 = (int *)ExAllocatePoolWithTag(PagedPool, v23, 0x74777445u);
        v2 = v24;
        if ( !v24 )
          break;
        SessionPoolTagInfo = ExGetSessionPoolTagInfo((__int64)v24, v23, &v42, &v45);
        v23 = 40 * v45;
        if ( SessionPoolTagInfo != -1073741820 )
        {
          if ( SessionPoolTagInfo >= 0 )
          {
            v52 = 0;
            v26 = v42;
            v27 = v2;
            p_SessionId = &SessionId;
            v51 = 4;
            if ( v42 )
            {
              do
              {
                v28 = *(_DWORD *)a1;
                v29 = *(_QWORD *)(a1 + 2256);
                v30 = v26;
                v53 = v27;
                if ( v26 > 0x64 )
                  v30 = 100;
                v55 = 0;
                v42 = v30;
                v54 = 40 * v30;
                EtwpLogKernelEvent((__int64)&v47, v29, v28, 3u, 3629 - (v3 != 0), 0x401802u);
                v27 += 10 * v42;
                v26 -= v42;
              }
              while ( v26 );
              v3 = a2;
            }
          }
          break;
        }
      }
      v31 = 40;
      for ( i = 40; ; v31 = i )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0);
        v32 = (int *)ExAllocatePoolWithTag(PagedPool, v31, 0x74777445u);
        v2 = v32;
        if ( !v32 )
          break;
        v33 = ExGetBigPoolInfo(v32, v31, 0, &i);
        if ( v33 != -1073741820 )
        {
          if ( v33 >= 0 )
          {
            v52 = 0;
            p_SessionId = &SessionId;
            v34 = v2 + 4;
            v51 = 4;
            v35 = v2[3];
            if ( v35 )
            {
              do
              {
                v36 = *(_DWORD *)a1;
                v37 = *(_QWORD *)(a1 + 2256);
                v38 = v35;
                v53 = v34;
                if ( v35 > 0x64 )
                  v38 = 100;
                v55 = 0;
                v42 = v38;
                v54 = 24 * v38;
                EtwpLogKernelEvent((__int64)&v47, v37, v36, 3u, 3631 - (v3 != 0), 0x401802u);
                v34 += 6 * v42;
                v35 -= v42;
              }
              while ( v35 );
              v3 = a2;
            }
          }
          break;
        }
      }
      MmDetachSession(v40, (__int64)v46);
    }
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
