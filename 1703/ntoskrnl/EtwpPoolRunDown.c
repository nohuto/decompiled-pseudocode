/*
 * XREFs of EtwpPoolRunDown @ 0x140710968
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140434EC0 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmGetNextSession @ 0x140071180 (MmGetNextSession.c)
 *     ExGetSessionPoolTagInfo @ 0x14007329C (ExGetSessionPoolTagInfo.c)
 *     MmDetachSession @ 0x140073870 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400738F0 (MmAttachSession.c)
 *     MmGetSessionId @ 0x14008BB90 (MmGetSessionId.c)
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExGetBigPoolInfo @ 0x14025ADD0 (ExGetBigPoolInfo.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExGetPoolTagInfo @ 0x14043E8C8 (ExGetPoolTagInfo.c)
 */

void __fastcall EtwpPoolRunDown(unsigned int a1, char a2)
{
  int *v2; // rbx
  char v3; // r12
  unsigned int v4; // edi
  unsigned __int16 v6; // si
  int *PoolWithTag; // rax
  int PoolTagInfo; // eax
  unsigned int v9; // edi
  int *v10; // r14
  int v11; // eax
  unsigned int v12; // edi
  int *v13; // rax
  int BigPoolInfo; // eax
  unsigned int v15; // edi
  int *v16; // r14
  int v17; // eax
  struct _KPROCESS *j; // rcx
  unsigned int v19; // esi
  int *v20; // rax
  int SessionPoolTagInfo; // eax
  unsigned int v22; // esi
  int *v23; // r15
  int v24; // eax
  unsigned int v25; // esi
  int *v26; // rax
  int v27; // eax
  int *v28; // r15
  unsigned int v29; // esi
  int v30; // eax
  ULONG_PTR NextSession; // rax
  struct _KPROCESS *v32; // rdi
  unsigned int v34; // [rsp+3Ch] [rbp-55h] BYREF
  unsigned int i; // [rsp+40h] [rbp-51h] BYREF
  int SessionId; // [rsp+44h] [rbp-4Dh] BYREF
  int v37; // [rsp+48h] [rbp-49h] BYREF
  char v38[48]; // [rsp+50h] [rbp-41h] BYREF
  unsigned int *v39; // [rsp+80h] [rbp-11h] BYREF
  int v40; // [rsp+88h] [rbp-9h]
  int v41; // [rsp+8Ch] [rbp-5h]
  int *p_SessionId; // [rsp+90h] [rbp-1h]
  int v43; // [rsp+98h] [rbp+7h]
  int v44; // [rsp+9Ch] [rbp+Bh]
  int *v45; // [rsp+A0h] [rbp+Fh]
  int v46; // [rsp+A8h] [rbp+17h]
  int v47; // [rsp+ACh] [rbp+1Bh]

  v2 = 0LL;
  v41 = 0;
  v39 = &v34;
  v3 = a2;
  v40 = 4;
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
            v11 = v9;
            p_SessionId = v10;
            if ( v9 > 0x64 )
              v11 = 100;
            v44 = 0;
            v34 = v11;
            v43 = 40 * v11;
            EtwpLogKernelEvent((__int64)&v39, EtwpHostSiloState, a1, 2u, v6, 0x401802u);
            v10 += 10 * v34;
            v9 -= v34;
          }
          while ( v9 );
          v3 = a2;
        }
      }
      break;
    }
    v4 = i;
  }
  v12 = 32;
  for ( i = 32; ; v12 = i )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    v13 = (int *)ExAllocatePoolWithTag(PagedPool, v12, 0x74777445u);
    v2 = v13;
    if ( !v13 )
      break;
    BigPoolInfo = ExGetBigPoolInfo(v13, v12, 1, &i);
    if ( BigPoolInfo != -1073741820 )
    {
      if ( BigPoolInfo >= 0 )
      {
        v15 = *v2;
        v16 = v2 + 2;
        if ( *v2 )
        {
          do
          {
            v17 = v15;
            p_SessionId = v16;
            if ( v15 > 0x64 )
              v17 = 100;
            v44 = 0;
            v34 = v17;
            v43 = 24 * v17;
            EtwpLogKernelEvent((__int64)&v39, EtwpHostSiloState, a1, 2u, 3627 - (v3 != 0), 0x401802u);
            v16 += 6 * v34;
            v15 -= v34;
          }
          while ( v15 );
          v3 = a2;
        }
      }
      break;
    }
  }
  for ( j = 0LL; ; j = v32 )
  {
    NextSession = MmGetNextSession(j);
    v32 = (struct _KPROCESS *)NextSession;
    if ( !NextSession )
      break;
    if ( (int)MmAttachSession(NextSession) >= 0 )
    {
      SessionId = MmGetSessionId(v32);
      v19 = 4000;
      while ( 1 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0);
        v20 = (int *)ExAllocatePoolWithTag(PagedPool, v19, 0x74777445u);
        v2 = v20;
        if ( !v20 )
          break;
        SessionPoolTagInfo = ExGetSessionPoolTagInfo((__int64)v20, v19, &v34, &v37);
        v19 = 40 * v37;
        if ( SessionPoolTagInfo != -1073741820 )
        {
          if ( SessionPoolTagInfo >= 0 )
          {
            v44 = 0;
            v22 = v34;
            v23 = v2;
            p_SessionId = &SessionId;
            v43 = 4;
            if ( v34 )
            {
              do
              {
                v24 = v22;
                v45 = v23;
                if ( v22 > 0x64 )
                  v24 = 100;
                v47 = 0;
                v34 = v24;
                v46 = 40 * v24;
                EtwpLogKernelEvent((__int64)&v39, EtwpHostSiloState, a1, 3u, 3629 - (v3 != 0), 0x401802u);
                v23 += 10 * v34;
                v22 -= v34;
              }
              while ( v22 );
              v3 = a2;
            }
          }
          break;
        }
      }
      v25 = 40;
      for ( i = 40; ; v25 = i )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0);
        v26 = (int *)ExAllocatePoolWithTag(PagedPool, v25, 0x74777445u);
        v2 = v26;
        if ( !v26 )
          break;
        v27 = ExGetBigPoolInfo(v26, v25, 0, &i);
        if ( v27 != -1073741820 )
        {
          if ( v27 >= 0 )
          {
            v44 = 0;
            p_SessionId = &SessionId;
            v28 = v2 + 4;
            v43 = 4;
            v29 = v2[3];
            if ( v29 )
            {
              do
              {
                v30 = v29;
                v45 = v28;
                if ( v29 > 0x64 )
                  v30 = 100;
                v47 = 0;
                v34 = v30;
                v46 = 24 * v30;
                EtwpLogKernelEvent((__int64)&v39, EtwpHostSiloState, a1, 3u, 3631 - (v3 != 0), 0x401802u);
                v28 += 6 * v34;
                v29 -= v34;
              }
              while ( v29 );
              v3 = a2;
            }
          }
          break;
        }
      }
      MmDetachSession((__int64)v32, (__int64)v38);
    }
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
