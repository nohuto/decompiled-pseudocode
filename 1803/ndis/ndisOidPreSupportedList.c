/*
 * XREFs of ndisOidPreSupportedList @ 0x1C001F7D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

char __fastcall ndisOidPreSupportedList(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  char v4; // bl
  __int64 v5; // rdi
  KSPIN_LOCK *v6; // r14
  KIRQL v7; // r12
  int v8; // eax
  unsigned int v9; // r15d
  __int64 v11; // rcx
  int v12; // eax

  v1 = a1[4];
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(81LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_13;
  }
  v3 = a1[3];
  v4 = 0;
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 16);
    goto LABEL_8;
  }
  if ( !a1[1] )
  {
    v5 = *a1;
    if ( !*a1 )
      v5 = *(_QWORD *)(a1[2] + 32);
LABEL_8:
    v6 = (KSPIN_LOCK *)(v5 + 96);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
    *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v5 + 1856) = 2300211;
    if ( *(_QWORD *)(v5 + 3096) )
    {
      v8 = 0;
      v9 = *(_DWORD *)(v5 + 3104) + *(_DWORD *)(v5 + 3424);
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v1 + 48) < v9 )
      {
        v8 = -1073676268;
        *(_DWORD *)(v1 + 56) = v9;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
      if ( v8 )
      {
LABEL_12:
        *(_QWORD *)(v5 + 520) = 0LL;
        *(_DWORD *)(v5 + 1856) = 0;
        KeReleaseSpinLock(v6, v7);
LABEL_13:
        v4 = 1;
        goto LABEL_14;
      }
      memmove(*(void **)(v1 + 40), *(const void **)(v5 + 3096), *(unsigned int *)(v5 + 3104));
      v11 = *(unsigned int *)(v5 + 3104);
LABEL_18:
      memmove((void *)(*(_QWORD *)(v1 + 40) + v11), *(const void **)(v5 + 3416), *(unsigned int *)(v5 + 3424));
      *(_QWORD *)(v5 + 520) = 0LL;
      *(_DWORD *)(v5 + 1856) = 0;
      KeReleaseSpinLock(v6, v7);
      *(_DWORD *)(a1[4] + 52) = v9;
      goto LABEL_13;
    }
    goto LABEL_27;
  }
  if ( a1[2] )
    goto LABEL_14;
  v5 = *a1;
  v6 = (KSPIN_LOCK *)(*a1 + 96);
  v7 = KeAcquireSpinLockRaiseToDpc(v6);
  *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v5 + 1856) = 2300268;
  if ( *(_QWORD *)(v5 + 496) )
  {
    v12 = 0;
    v9 = *(_DWORD *)(v5 + 3424) + *(_DWORD *)(v5 + 200);
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < v9 )
    {
      v12 = -1073676268;
      *(_DWORD *)(v1 + 56) = v9;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    if ( v12 )
      goto LABEL_12;
    memmove(*(void **)(v1 + 40), *(const void **)(v5 + 496), *(unsigned int *)(v5 + 200));
    v11 = *(unsigned int *)(v5 + 200);
    goto LABEL_18;
  }
LABEL_27:
  *(_QWORD *)(v5 + 520) = 0LL;
  *(_DWORD *)(v5 + 1856) = 0;
  KeReleaseSpinLock(v6, v7);
LABEL_14:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(82LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1);
  return v4;
}
