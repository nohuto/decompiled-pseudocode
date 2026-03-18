/*
 * XREFs of CmpQueryKeyDataFromCache @ 0x140553DC0
 * Callers:
 *     CmpQueryKeyData @ 0x140553CE4 (CmpQueryKeyData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmEqualTrans @ 0x140498AE0 (CmEqualTrans.c)
 *     CmpIsKeyDeleted @ 0x1404A5C40 (CmpIsKeyDeleted.c)
 *     CmGetVisibleSubkeyCount @ 0x14054EC80 (CmGetVisibleSubkeyCount.c)
 *     CmListGetNextElement @ 0x14054F160 (CmListGetNextElement.c)
 *     CmGetVisibleMaxValueNameLenAndDataLen @ 0x140554020 (CmGetVisibleMaxValueNameLenAndDataLen.c)
 *     CmListGetPrevElement @ 0x14057B328 (CmListGetPrevElement.c)
 */

__int64 __fastcall CmpQueryKeyDataFromCache(__int64 a1, int a2, __int64 a3, unsigned int a4, _DWORD *a5, __int64 a6)
{
  __int64 v9; // rax
  unsigned __int16 v10; // r15
  unsigned int v11; // r12d
  int VisibleMaxValueNameLenAndDataLen; // r12d
  __int64 v13; // rbx
  int v14; // eax
  int v15; // ecx
  __int64 PrevElement; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD **v21; // rax
  char *NextElement; // rax
  char *v23; // rbx
  bool v24; // zf
  __int64 v25; // rbx
  __int64 v26; // rax
  unsigned int v27; // ebx
  _QWORD *v28; // [rsp+38h] [rbp-50h] BYREF
  _DWORD v29[2]; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v30[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v31; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v32; // [rsp+90h] [rbp+8h]

  v30[0] = -1;
  v30[1] = 0;
  v9 = *(_QWORD *)(a1 + 72);
  if ( !v9 )
    return 3221225626LL;
  v10 = *(_WORD *)(v9 + 24);
  if ( (*(_DWORD *)v9 & 1) != 0 )
    v10 *= 2;
  if ( a2 == 4 )
  {
    v28 = 0LL;
    v29[0] = -1;
    v29[1] = 0;
    v11 = *(unsigned __int16 *)(a1 + 168);
    v32 = v11;
    if ( a6 )
    {
      v21 = (_QWORD **)(a1 + 200);
      while ( 1 )
      {
        NextElement = CmListGetNextElement(v21, &v28, 32);
        v23 = NextElement;
        if ( !NextElement )
          break;
        v24 = CmEqualTrans(*((_QWORD *)NextElement + 7), a6) == 0;
        v21 = (_QWORD **)(a1 + 200);
        if ( !v24 )
        {
          v21 = (_QWORD **)(a1 + 200);
          if ( *((_DWORD *)v23 + 17) == 1 )
          {
            v25 = *((_QWORD *)v23 + 11);
            v31 = v25;
            v24 = (unsigned __int8)CmpIsKeyDeleted(v25, 0LL) == 0;
            v21 = (_QWORD **)(a1 + 200);
            if ( v24 )
            {
              v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v25 + 24) + 8LL))(
                      *(_QWORD *)(v25 + 24),
                      *(unsigned int *)(v25 + 32),
                      v29);
              if ( !v26 )
                return (unsigned int)-1073741670;
              v27 = (unsigned __int16)*(_DWORD *)(v26 + 52);
              (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v31 + 24) + 16LL))(*(_QWORD *)(v31 + 24), v29);
              if ( v11 >= v27 )
                v27 = v11;
              v11 = v27;
              v32 = v27;
              v21 = (_QWORD **)(a1 + 200);
            }
          }
        }
      }
    }
    VisibleMaxValueNameLenAndDataLen = CmGetVisibleMaxValueNameLenAndDataLen(
                                         a1,
                                         0,
                                         a6,
                                         (unsigned int)&v28,
                                         (__int64)v29);
    if ( VisibleMaxValueNameLenAndDataLen >= 0 )
    {
      *a5 = 40;
      if ( a4 < 0x28 )
      {
        return (unsigned int)-1073741789;
      }
      else
      {
        v31 = 0LL;
        v13 = *(_QWORD *)(a1 + 160);
        if ( a6 )
        {
          while ( 1 )
          {
            PrevElement = CmListGetPrevElement(a1 + 200, &v31);
            v17 = PrevElement;
            if ( !PrevElement )
              break;
            if ( CmEqualTrans(*(_QWORD *)(PrevElement + 56), a6) && *(_DWORD *)(v17 + 68) == 8 )
            {
              v13 = *(_QWORD *)(v17 + 88);
              break;
            }
          }
        }
        *(_QWORD *)a3 = v13;
        *(_DWORD *)(a3 + 8) = 0;
        *(_DWORD *)(a3 + 32) = v10;
        v14 = -1;
        if ( a1 )
        {
          if ( a6 && (v18 = *(_QWORD *)(a1 + 280)) != 0 && v18 == a6 )
            v14 = *(_DWORD *)(a1 + 272);
          else
            v14 = *(_DWORD *)(a1 + 88);
        }
        *(_DWORD *)(a3 + 20) = v14;
        *(_DWORD *)(a3 + 16) = v32;
        *(_DWORD *)(a3 + 24) = (_DWORD)v28;
        *(_DWORD *)(a3 + 28) = v29[0];
        v15 = *(_DWORD *)(a1 + 4);
        if ( (v15 & 0x40) != 0 || *(_QWORD *)(a1 + 200) != a1 + 200 )
        {
          v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 8LL))(
                  *(_QWORD *)(a1 + 24),
                  *(unsigned int *)(a1 + 32),
                  v30);
          if ( v19 )
          {
            *(_DWORD *)(a3 + 12) = CmGetVisibleSubkeyCount(a1, v19, a6);
            (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v30);
          }
          else
          {
            return (unsigned int)-1073741670;
          }
        }
        else if ( (v15 & 1) != 0 )
        {
          *(_DWORD *)(a3 + 12) = 0;
        }
        else if ( (v15 & 2) != 0 )
        {
          *(_DWORD *)(a3 + 12) = 1;
        }
        else if ( (v15 & 4) != 0 )
        {
          *(_DWORD *)(a3 + 12) = **(_DWORD **)(a1 + 104);
        }
        else
        {
          *(_DWORD *)(a3 + 12) = *(_DWORD *)(a1 + 104);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)VisibleMaxValueNameLenAndDataLen;
}
