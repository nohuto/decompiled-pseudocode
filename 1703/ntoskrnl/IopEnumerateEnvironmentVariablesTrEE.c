/*
 * XREFs of IopEnumerateEnvironmentVariablesTrEE @ 0x140690A00
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IopIssueTrEERequest @ 0x1401F6D10 (IopIssueTrEERequest.c)
 *     IopVerifierExAllocatePool_4 @ 0x1401F6E00 (IopVerifierExAllocatePool_4.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopEfiStatusToNTSTATUS @ 0x140690764 (IopEfiStatusToNTSTATUS.c)
 */

__int64 __fastcall IopEnumerateEnvironmentVariablesTrEE(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int64 a4,
        _DWORD *a5)
{
  _OWORD *v8; // r14
  _QWORD *v9; // rsi
  _DWORD *v10; // r15
  __int64 v11; // rcx
  _OWORD *Pool_4; // r12
  int v13; // ebx
  __int64 v14; // rcx
  __int64 *v15; // rdi
  __int64 v16; // rcx
  _OWORD *v17; // rbx
  unsigned __int64 v18; // r12
  void *v19; // rcx
  int v20; // eax
  unsigned __int64 v21; // rdx
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _DWORD *v26; // rcx
  void *v27; // r15
  unsigned __int64 v28; // rbx
  int v29; // eax
  unsigned __int64 v30; // rbx
  int v31; // [rsp+50h] [rbp-68h] BYREF
  _OWORD *v32; // [rsp+58h] [rbp-60h]
  unsigned __int64 v33; // [rsp+60h] [rbp-58h]
  __int64 v34; // [rsp+68h] [rbp-50h]
  unsigned __int64 v35; // [rsp+70h] [rbp-48h]
  void *i; // [rsp+78h] [rbp-40h]

  if ( (unsigned int)(a3 - 1) > 1 )
    return 3221225485LL;
  LODWORD(v34) = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  Pool_4 = IopVerifierExAllocatePool_4(a1, 0x214uLL);
  v32 = Pool_4;
  if ( Pool_4 )
  {
    v15 = (__int64 *)IopVerifierExAllocatePool_4(v11, 0x220uLL);
    if ( v15
      && (a3 != 2
       || (v8 = IopVerifierExAllocatePool_4(v14, 0x214uLL)) != 0LL
       && (v34 = 288LL, (v9 = IopVerifierExAllocatePool_4(v16, 0x120uLL)) != 0LL)) )
    {
      v35 = a4 + (unsigned int)*a5;
      *a5 = 0;
      memset(v15, 0, 0x220uLL);
      v17 = v32;
      v18 = a4;
      v33 = a4;
      v19 = v32 + 1;
      for ( i = v32 + 1; ; v19 = i )
      {
        *v17 = *(_OWORD *)(v15 + 1);
        memmove(v19, (char *)v15 + 28, *((unsigned int *)v15 + 6));
        *((_WORD *)v17 + ((unsigned __int64)*((unsigned int *)v15 + 6) >> 1) + 8) = 0;
        v20 = IopIssueTrEERequest(1, a1, a2, (__int64)v17, 0x214u, (__int64)v15, 0x220u, 0x1Cu, &v31);
        LODWORD(v21) = 0;
        v13 = v20;
        if ( v20 < 0 )
          break;
        if ( *v15 == 0x800000000000000EuLL )
        {
          v13 = 0;
          break;
        }
        if ( *v15 < 0 )
        {
          v13 = IopEfiStatusToNTSTATUS(*v15);
          break;
        }
        if ( a3 == 2 )
        {
          *v8 = *(_OWORD *)(v15 + 1);
          memmove(v8 + 1, (char *)v15 + 28, *((unsigned int *)v15 + 6));
          while ( 1 )
          {
            v22 = IopIssueTrEERequest(0, a1, a2, (__int64)v8, 0x214u, (__int64)v9, v34, 0x18u, &v31);
            v21 = 0LL;
            v13 = v22;
            if ( v22 < 0 )
              goto LABEL_40;
            if ( *v9 == 0x8000000000000005uLL )
            {
              if ( a4 )
              {
                v23 = *((_DWORD *)v9 + 4) + 32;
                v34 = v23;
                ExFreePoolWithTag(v9, 0);
                v25 = IopVerifierExAllocatePool_4(v24, v23);
                v21 = 0LL;
                v9 = v25;
                if ( !v25 )
                {
                  v13 = -1073741670;
                  goto LABEL_40;
                }
                v13 = -1073741789;
              }
            }
            else if ( (__int64)*v9 < 0 )
            {
              v13 = IopEfiStatusToNTSTATUS(*v9);
LABEL_25:
              if ( v13 < 0 )
                goto LABEL_40;
              v26 = (_DWORD *)v33;
              v27 = (void *)((*((unsigned int *)v15 + 6) + v33 + 39) & 0xFFFFFFFFFFFFFFF8uLL);
              v28 = ((unsigned __int64)v27 + v9[2] + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v28 > v35 )
                a4 = v21;
              if ( a4 )
              {
                *(_OWORD *)(v33 + 16) = *(_OWORD *)(v15 + 1);
                memmove(v26 + 8, (char *)v15 + 28, *((unsigned int *)v15 + 6));
                *(_DWORD *)(v33 + 4) = (_DWORD)v27 - v33;
                memmove(v27, v9 + 3, v9[2]);
                v26 = (_DWORD *)v33;
                *(_DWORD *)(v33 + 8) = *((_DWORD *)v9 + 4);
                v26[3] = *((_DWORD *)v9 + 2);
                *v26 = v28 - (_DWORD)v26;
              }
              v33 = v28;
              v29 = v28 - (_DWORD)v26;
              v10 = v26;
              goto LABEL_36;
            }
            if ( v13 != -1073741789 )
              goto LABEL_25;
          }
        }
        v30 = (v18 + *((unsigned int *)v15 + 6) + 27LL) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v30 > v35 )
          a4 = 0LL;
        if ( a4 )
        {
          *(_OWORD *)(v18 + 4) = *(_OWORD *)(v15 + 1);
          memmove((void *)(v18 + 20), (char *)v15 + 28, *((unsigned int *)v15 + 6));
          *(_DWORD *)v18 = v30 - v18;
        }
        v10 = (_DWORD *)v18;
        v29 = v30 - v18;
        v18 = v30;
LABEL_36:
        *a5 += v29;
        v17 = v32;
      }
LABEL_40:
      Pool_4 = v32;
      if ( v10 && a4 )
        *v10 = v21;
    }
    else
    {
      v13 = -1073741670;
    }
    ExFreePoolWithTag(Pool_4, 0);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  else
  {
    v13 = -1073741670;
  }
  if ( !a4 )
  {
    if ( *a5 )
      return (unsigned int)-1073741789;
  }
  return (unsigned int)v13;
}
