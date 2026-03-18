/*
 * XREFs of ?bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z @ 0x1C00EB358
 * Callers:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C00EA7C8 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bFill(
        struct EPATHOBJ *a1,
        struct _RECTL *a2,
        char a3,
        void (*a4)(struct _RECTL *, unsigned int, void *))
{
  __int64 v6; // rax
  char *v7; // r14
  int v8; // eax
  int v9; // r13d
  char *v10; // r9
  __int64 v11; // rdx
  unsigned int v12; // edi
  _QWORD *v13; // r8
  unsigned int v14; // esi
  _QWORD *v15; // rdi
  int v16; // r10d
  int v17; // ecx
  int v18; // ecx
  int v20; // esi
  unsigned int i; // r14d
  __int64 v22; // r8
  int v23; // esi
  unsigned int j; // r14d
  __int64 v25; // r8
  unsigned int v26; // [rsp+20h] [rbp-648h]
  int *v27; // [rsp+28h] [rbp-640h]
  int v28; // [rsp+48h] [rbp-620h]
  __int128 v29; // [rsp+68h] [rbp-600h]
  _QWORD *v30; // [rsp+88h] [rbp-5E0h] BYREF
  int v31; // [rsp+94h] [rbp-5D4h]
  int v32; // [rsp+98h] [rbp-5D0h]
  _QWORD v33[6]; // [rsp+B8h] [rbp-5B0h] BYREF
  _DWORD v34[4]; // [rsp+E8h] [rbp-580h] BYREF
  _DWORD v35[4]; // [rsp+F8h] [rbp-570h] BYREF
  char v36; // [rsp+108h] [rbp-560h] BYREF
  int v37; // [rsp+10Ch] [rbp-55Ch]
  int v38; // [rsp+114h] [rbp-554h]
  _BYTE v39[320]; // [rsp+120h] [rbp-548h] BYREF
  char v40; // [rsp+260h] [rbp-408h] BYREF

  if ( (a3 & 1) != 0 && *((_QWORD *)a1 + 7) )
  {
    if ( a2 )
    {
      v20 = 0;
      for ( i = 0; i < *((_DWORD *)a1 + 12); ++i )
      {
        v22 = *((_QWORD *)a1 + 7);
        v34[0] = *(_DWORD *)(v22 + 16LL * i);
        v34[1] = *(_DWORD *)(v22 + 16LL * i + 4);
        v34[2] = *(_DWORD *)(v22 + 16LL * i + 8);
        v34[3] = *(_DWORD *)(v22 + 16LL * i + 12);
        if ( a2->left >= *(_DWORD *)(v22 + 16LL * i)
          || a2->top >= *(_DWORD *)(v22 + 16LL * i + 4)
          || a2->right <= *(_DWORD *)(v22 + 16LL * i + 8)
          || a2->bottom <= *(_DWORD *)(v22 + 16LL * i + 12) )
        {
          ERECTL::operator*=(v34, a2);
          if ( v20 )
          {
            _guard_dispatch_icall_fptr();
            v20 = 0;
          }
          if ( !ERECTL::bEmpty((ERECTL *)v34) )
            _guard_dispatch_icall_fptr();
        }
        else
        {
          ++v20;
        }
      }
      if ( v20 )
        _guard_dispatch_icall_fptr();
      return 1LL;
    }
    goto LABEL_50;
  }
  if ( (a3 & 3) == 2 && *((_QWORD *)a1 + 9) )
  {
    if ( a2 )
    {
      v23 = 0;
      for ( j = 0; j < *((_DWORD *)a1 + 16); ++j )
      {
        v25 = *((_QWORD *)a1 + 9);
        if ( a2->left >= *(_DWORD *)(v25 + 16LL * j)
          || a2->top >= *(_DWORD *)(v25 + 16LL * j + 4)
          || a2->right <= *(_DWORD *)(v25 + 16LL * j + 8)
          || a2->bottom <= *(_DWORD *)(v25 + 16LL * j + 12) )
        {
          v35[0] = *(_DWORD *)(v25 + 16LL * j);
          v35[1] = *(_DWORD *)(v25 + 16LL * j + 4);
          v35[2] = *(_DWORD *)(v25 + 16LL * j + 8);
          v35[3] = *(_DWORD *)(v25 + 16LL * j + 12);
          ERECTL::operator*=(v35, a2);
          if ( v23 )
          {
            _guard_dispatch_icall_fptr();
            v23 = 0;
          }
          if ( !ERECTL::bEmpty((ERECTL *)v35) )
            _guard_dispatch_icall_fptr();
        }
        else
        {
          ++v23;
        }
      }
      if ( v23 )
        _guard_dispatch_icall_fptr();
      return 1LL;
    }
LABEL_50:
    _guard_dispatch_icall_fptr();
    return 1LL;
  }
  v6 = *((unsigned int *)a1 + 1);
  if ( (unsigned int)v6 <= 0x14 )
  {
    v7 = &v40;
    v8 = 0;
  }
  else
  {
    if ( (unsigned __int64)(48 * v6) > 0xFFFFFFFF )
      return 0LL;
    v7 = (char *)PALLOCMEM2((unsigned int)(48 * v6), 1734632775LL, 0);
    if ( !v7 )
      return 0LL;
    v8 = 1;
  }
  v28 = v8;
  v27 = (int *)v39;
  v9 = 0;
  v29 = 0uLL;
  if ( a2 )
  {
    v29 = (__int128)*a2;
    v37 = 16 * a2->top;
    v38 = 16 * a2->bottom;
    v10 = &v36;
  }
  else
  {
    v10 = 0LL;
  }
  v12 = bConstructGET(a1, v33, v7, v10);
  v26 = v12;
  if ( v12 )
  {
    v14 = 0x80000000;
    v13 = &v30;
    v30 = &v30;
    v32 = 0;
    v31 = 0x7FFFFFFF;
LABEL_12:
    if ( v13 != &v30 )
    {
      vAdvanceAETEdges(&v30);
      v13 = v30;
      if ( v30 != &v30 )
      {
        if ( (_QWORD **)*v30 != &v30 )
        {
          vXSortAETEdges(&v30);
          v13 = v30;
        }
        goto LABEL_16;
      }
    }
    if ( (_QWORD *)v33[0] != v33 )
    {
      v14 = *(_DWORD *)(v33[0] + 16LL);
LABEL_16:
      if ( *(_DWORD *)(v33[0] + 16LL) == v14 )
      {
        vMoveNewEdges(v33, &v30, v14);
        v13 = v30;
      }
      v15 = v13;
      while ( 1 )
      {
        v16 = *((_DWORD *)v15 + 3);
        if ( (a3 & 2) != 0 )
        {
          v17 = *((_DWORD *)v15 + 10);
          do
          {
            v15 = (_QWORD *)*v15;
            v17 += *((_DWORD *)v15 + 10);
          }
          while ( v17 );
        }
        else
        {
          v15 = (_QWORD *)*v15;
        }
        if ( v16 >= *((_DWORD *)v15 + 3) )
          goto LABEL_32;
        if ( a2 )
        {
          v11 = (unsigned int)v29;
          if ( v16 >= (int)v29 )
            v11 = (unsigned int)v16;
          *v27 = v11;
          v18 = DWORD2(v29);
          if ( *((_DWORD *)v15 + 3) <= SDWORD2(v29) )
            v18 = *((_DWORD *)v15 + 3);
          v27[2] = v18;
          v27[1] = v14;
          v27[3] = v14 + 1;
          if ( (int)v11 >= v18 )
            goto LABEL_30;
        }
        else
        {
          *v27 = v16;
          v27[2] = *((_DWORD *)v15 + 3);
          v27[1] = v14;
          v27[3] = v14 + 1;
        }
        ++v9;
        v27 += 4;
LABEL_30:
        if ( v9 == 20 )
        {
          _guard_dispatch_icall_fptr();
          v27 = (int *)v39;
          v9 = 0;
          v13 = v30;
        }
LABEL_32:
        v15 = (_QWORD *)*v15;
        if ( v15 == &v30 )
        {
          ++v14;
          goto LABEL_12;
        }
      }
    }
    if ( v9 )
      _guard_dispatch_icall_fptr();
    v12 = v26;
  }
  if ( v28 )
    Win32FreePool(v7, v11, v13);
  return v12;
}
