/*
 * XREFs of ?bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z @ 0x1C0126134
 * Callers:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C0124D14 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     UIntMult @ 0x1C019B168 (UIntMult.c)
 */

__int64 __fastcall bFill(
        struct EPATHOBJ *a1,
        struct _RECTL *a2,
        char a3,
        void (*a4)(struct _RECTL *, unsigned int, void *))
{
  int v6; // esi
  unsigned int i; // r14d
  __int64 v8; // r8
  int v10; // esi
  unsigned int j; // r14d
  __int64 v12; // r8
  UINT v13; // edx
  _BYTE *v14; // r14
  int v15; // eax
  int v16; // r13d
  char *v17; // r9
  unsigned int v18; // ebx
  unsigned int v19; // esi
  _QWORD **v20; // rbx
  _QWORD **v21; // r8
  _QWORD **v22; // rbx
  _QWORD **v23; // rax
  int v24; // r10d
  int v25; // ecx
  int v26; // edx
  int v27; // ecx
  unsigned int v28; // [rsp+20h] [rbp-638h]
  int *v29; // [rsp+28h] [rbp-630h]
  UINT puResult; // [rsp+48h] [rbp-610h] BYREF
  int v31; // [rsp+4Ch] [rbp-60Ch]
  _BYTE *v32; // [rsp+50h] [rbp-608h]
  _QWORD **v33; // [rsp+58h] [rbp-600h]
  _QWORD **v34; // [rsp+60h] [rbp-5F8h]
  _QWORD *v35; // [rsp+68h] [rbp-5F0h]
  __int128 v36; // [rsp+70h] [rbp-5E8h]
  _QWORD *v37; // [rsp+80h] [rbp-5D8h] BYREF
  int v38; // [rsp+8Ch] [rbp-5CCh]
  int v39; // [rsp+90h] [rbp-5C8h]
  _QWORD v40[6]; // [rsp+B0h] [rbp-5A8h] BYREF
  _DWORD v41[4]; // [rsp+E0h] [rbp-578h] BYREF
  _DWORD v42[4]; // [rsp+F0h] [rbp-568h] BYREF
  char v43; // [rsp+100h] [rbp-558h] BYREF
  int v44; // [rsp+104h] [rbp-554h]
  int v45; // [rsp+10Ch] [rbp-54Ch]
  _BYTE v46[320]; // [rsp+110h] [rbp-548h] BYREF
  _BYTE v47[960]; // [rsp+250h] [rbp-408h] BYREF

  if ( (a3 & 1) != 0 && *((_QWORD *)a1 + 7) )
  {
    if ( a2 )
    {
      v6 = 0;
      for ( i = 0; i < *((_DWORD *)a1 + 12); ++i )
      {
        v8 = *((_QWORD *)a1 + 7);
        v41[0] = *(_DWORD *)(v8 + 16LL * i);
        v41[1] = *(_DWORD *)(v8 + 16LL * i + 4);
        v41[2] = *(_DWORD *)(v8 + 16LL * i + 8);
        v41[3] = *(_DWORD *)(v8 + 16LL * i + 12);
        if ( a2->left >= *(_DWORD *)(v8 + 16LL * i)
          || a2->top >= *(_DWORD *)(v8 + 16LL * i + 4)
          || a2->right <= *(_DWORD *)(v8 + 16LL * i + 8)
          || a2->bottom <= *(_DWORD *)(v8 + 16LL * i + 12) )
        {
          ERECTL::operator*=(v41, a2);
          if ( v6 )
          {
            _guard_dispatch_icall_fptr();
            v6 = 0;
          }
          if ( !ERECTL::bEmpty((ERECTL *)v41) )
            _guard_dispatch_icall_fptr();
        }
        else
        {
          ++v6;
        }
      }
      if ( v6 )
        _guard_dispatch_icall_fptr();
      return 1LL;
    }
LABEL_4:
    _guard_dispatch_icall_fptr();
    return 1LL;
  }
  if ( (a3 & 3) == 2 && *((_QWORD *)a1 + 9) )
  {
    if ( a2 )
    {
      v10 = 0;
      for ( j = 0; j < *((_DWORD *)a1 + 16); ++j )
      {
        v12 = *((_QWORD *)a1 + 9);
        if ( a2->left >= *(_DWORD *)(v12 + 16LL * j)
          || a2->top >= *(_DWORD *)(v12 + 16LL * j + 4)
          || a2->right <= *(_DWORD *)(v12 + 16LL * j + 8)
          || a2->bottom <= *(_DWORD *)(v12 + 16LL * j + 12) )
        {
          v42[0] = *(_DWORD *)(v12 + 16LL * j);
          v42[1] = *(_DWORD *)(v12 + 16LL * j + 4);
          v42[2] = *(_DWORD *)(v12 + 16LL * j + 8);
          v42[3] = *(_DWORD *)(v12 + 16LL * j + 12);
          ERECTL::operator*=(v42, a2);
          if ( v10 )
          {
            _guard_dispatch_icall_fptr();
            v10 = 0;
          }
          if ( !ERECTL::bEmpty((ERECTL *)v42) )
            _guard_dispatch_icall_fptr();
        }
        else
        {
          ++v10;
        }
      }
      if ( v10 )
        _guard_dispatch_icall_fptr();
      return 1LL;
    }
    goto LABEL_4;
  }
  v13 = *((_DWORD *)a1 + 1);
  if ( v13 > 0x14 )
  {
    if ( UIntMult(0x30u, v13, &puResult) < 0 )
      return 0LL;
    v14 = PALLOCMEM2(puResult, 1734632775LL, 0);
    v32 = v14;
    if ( !v14 )
      return 0LL;
    v15 = 1;
  }
  else
  {
    v14 = v47;
    v32 = v47;
    v15 = 0;
  }
  v31 = v15;
  v29 = (int *)v46;
  v16 = 0;
  v36 = 0LL;
  if ( a2 )
  {
    v36 = (__int128)*a2;
    v44 = 16 * a2->top;
    v45 = 16 * a2->bottom;
    v17 = &v43;
  }
  else
  {
    v17 = 0LL;
  }
  v35 = v40;
  v18 = bConstructGET(a1, v40, v14, v17);
  v28 = v18;
  if ( v18 )
  {
    v19 = 0x80000000;
    v20 = &v37;
    v33 = &v37;
    v21 = &v37;
    v37 = &v37;
    v39 = 0;
    v38 = 0x7FFFFFFF;
LABEL_48:
    if ( v21 == v20 || (vAdvanceAETEdges(&v37), v21 = (_QWORD **)v37, v37 == v20) )
    {
      if ( (_QWORD *)v40[0] == v35 )
      {
        if ( v16 )
          _guard_dispatch_icall_fptr();
        v18 = v28;
        goto LABEL_81;
      }
      v19 = *(_DWORD *)(v40[0] + 16LL);
    }
    else if ( (_QWORD **)*v37 != v20 )
    {
      vXSortAETEdges(v20);
      v21 = (_QWORD **)v37;
    }
    if ( *(_DWORD *)(v40[0] + 16LL) == v19 )
    {
      vMoveNewEdges(v40, &v37, v19);
      v21 = (_QWORD **)v37;
    }
    v22 = v21;
    v23 = v33;
    while ( 1 )
    {
      v24 = *((_DWORD *)v22 + 3);
      if ( (a3 & 2) != 0 )
      {
        v25 = *((_DWORD *)v22 + 10);
        do
        {
          v22 = (_QWORD **)*v22;
          v25 += *((_DWORD *)v22 + 10);
        }
        while ( v25 );
      }
      else
      {
        v22 = (_QWORD **)*v22;
      }
      v34 = v22;
      if ( v24 < *((_DWORD *)v22 + 3) )
        break;
LABEL_78:
      v22 = (_QWORD **)*v22;
      if ( v22 == v23 )
      {
        ++v19;
        v20 = v33;
        goto LABEL_48;
      }
    }
    if ( a2 )
    {
      v26 = v36;
      if ( v24 >= (int)v36 )
        v26 = v24;
      *v29 = v26;
      v27 = DWORD2(v36);
      if ( *((_DWORD *)v22 + 3) <= SDWORD2(v36) )
        v27 = *((_DWORD *)v22 + 3);
      v29[2] = v27;
      v29[1] = v19;
      v29[3] = v19 + 1;
      if ( v26 >= v27 )
        goto LABEL_75;
    }
    else
    {
      *v29 = v24;
      v29[2] = *((_DWORD *)v22 + 3);
      v29[1] = v19;
      v29[3] = v19 + 1;
    }
    ++v16;
    v29 += 4;
LABEL_75:
    if ( v16 == 20 )
    {
      _guard_dispatch_icall_fptr();
      v29 = (int *)v46;
      v16 = 0;
      v21 = (_QWORD **)v37;
    }
    v23 = v33;
    goto LABEL_78;
  }
LABEL_81:
  if ( v31 )
    Win32FreePool(v14);
  return v18;
}
