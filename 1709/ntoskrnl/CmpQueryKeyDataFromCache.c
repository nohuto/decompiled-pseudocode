/*
 * XREFs of CmpQueryKeyDataFromCache @ 0x140569F50
 * Callers:
 *     CmpQueryKeyData @ 0x140569E70 (CmpQueryKeyData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmGetVisibleSubkeyCount @ 0x140472B8C (CmGetVisibleSubkeyCount.c)
 *     CmEqualTrans @ 0x14056959C (CmEqualTrans.c)
 *     CmpIsKeyDeleted @ 0x140569BB0 (CmpIsKeyDeleted.c)
 *     CmGetVisibleMaxValueNameLenAndDataLen @ 0x14056A1E4 (CmGetVisibleMaxValueNameLenAndDataLen.c)
 *     CmListGetNextElement @ 0x14056A314 (CmListGetNextElement.c)
 *     CmListGetPrevElement @ 0x14056A340 (CmListGetPrevElement.c)
 */

__int64 __fastcall CmpQueryKeyDataFromCache(__int64 a1, int a2, __int64 a3, unsigned int a4, _DWORD *a5, __int64 a6)
{
  __int64 v9; // rcx
  unsigned __int16 v10; // r15
  unsigned int v11; // r12d
  __int64 v12; // r8
  __int64 v13; // r9
  int VisibleMaxValueNameLenAndDataLen; // r12d
  __int64 v15; // rbx
  int v16; // eax
  int v17; // ecx
  __int64 PrevElement; // rax
  __int64 v19; // r13
  __int64 v20; // rax
  char v21; // al
  __int64 v22; // rax
  __int64 v24; // rax
  __int64 NextElement; // rax
  __int64 v26; // rbx
  bool v27; // zf
  __int64 v28; // rbx
  __int64 v29; // rax
  unsigned int v30; // ebx
  __int64 v31; // [rsp+38h] [rbp-50h] BYREF
  _DWORD v32[2]; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v33[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v34; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v35; // [rsp+90h] [rbp+8h]

  v33[0] = -1;
  v33[1] = 0;
  v9 = *(_QWORD *)(a1 + 72);
  if ( !v9 )
    return 3221225626LL;
  v10 = *(_WORD *)(v9 + 24);
  if ( (*(_DWORD *)v9 & 1) != 0 )
    v10 *= 2;
  if ( a2 == 4 )
  {
    v31 = 0LL;
    v32[0] = -1;
    v32[1] = 0;
    v11 = *(unsigned __int16 *)(a1 + 168);
    v35 = v11;
    if ( a6 )
    {
LABEL_36:
      v24 = a1 + 200;
      while ( 1 )
      {
        NextElement = CmListGetNextElement(v24, &v31, 32LL);
        v26 = NextElement;
        if ( !NextElement )
          break;
        v27 = CmEqualTrans(*(_QWORD *)(NextElement + 56), a6) == 0;
        v24 = a1 + 200;
        if ( !v27 )
        {
          v24 = a1 + 200;
          if ( *(_DWORD *)(v26 + 68) == 1 )
          {
            v28 = *(_QWORD *)(v26 + 88);
            v34 = v28;
            v27 = CmpIsKeyDeleted(v28, 0LL) == 0;
            v24 = a1 + 200;
            if ( v27 )
            {
              v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v28 + 24) + 8LL))(
                      *(_QWORD *)(v28 + 24),
                      *(unsigned int *)(v28 + 32),
                      v32);
              if ( !v29 )
                return (unsigned int)-1073741670;
              v30 = (unsigned __int16)*(_DWORD *)(v29 + 52);
              (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v34 + 24) + 16LL))(*(_QWORD *)(v34 + 24), v32);
              if ( v11 >= v30 )
                v30 = v11;
              v11 = v30;
              v35 = v30;
              goto LABEL_36;
            }
          }
        }
      }
    }
    VisibleMaxValueNameLenAndDataLen = CmGetVisibleMaxValueNameLenAndDataLen(
                                         a1,
                                         0,
                                         a6,
                                         (unsigned int)&v31,
                                         (__int64)v32);
    if ( VisibleMaxValueNameLenAndDataLen >= 0 )
    {
      *a5 = 40;
      if ( a4 < 0x28 )
      {
        return (unsigned int)-1073741789;
      }
      else
      {
        v34 = 0LL;
        v15 = *(_QWORD *)(a1 + 160);
        if ( a6 )
        {
          while ( 1 )
          {
            PrevElement = CmListGetPrevElement(a1 + 200, &v34, v12, v13);
            v19 = PrevElement;
            if ( !PrevElement )
              break;
            v21 = CmEqualTrans(*(_QWORD *)(PrevElement + 56), a6);
            if ( v21 && *(_DWORD *)(v19 + 68) == 8 )
            {
              v15 = *(_QWORD *)(v19 + 88);
              break;
            }
          }
        }
        *(_QWORD *)a3 = v15;
        *(_DWORD *)(a3 + 8) = 0;
        *(_DWORD *)(a3 + 32) = v10;
        v16 = -1;
        if ( a1 )
        {
          if ( a6 && (v20 = *(_QWORD *)(a1 + 280)) != 0 && v20 == a6 )
            v16 = *(_DWORD *)(a1 + 272);
          else
            v16 = *(_DWORD *)(a1 + 88);
        }
        *(_DWORD *)(a3 + 20) = v16;
        *(_DWORD *)(a3 + 16) = v35;
        *(_DWORD *)(a3 + 24) = v31;
        *(_DWORD *)(a3 + 28) = v32[0];
        v17 = *(_DWORD *)(a1 + 4);
        if ( (v17 & 0x40) != 0 || *(_QWORD *)(a1 + 200) != a1 + 200 )
        {
          v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 8LL))(
                  *(_QWORD *)(a1 + 24),
                  *(unsigned int *)(a1 + 32),
                  v33);
          if ( v22 )
          {
            *(_DWORD *)(a3 + 12) = CmGetVisibleSubkeyCount(a1, v22, a6);
            (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v33);
          }
          else
          {
            return (unsigned int)-1073741670;
          }
        }
        else if ( (v17 & 1) != 0 )
        {
          *(_DWORD *)(a3 + 12) = 0;
        }
        else if ( (v17 & 2) != 0 )
        {
          *(_DWORD *)(a3 + 12) = 1;
        }
        else if ( (v17 & 4) != 0 )
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
