/*
 * XREFs of ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0037088
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002C340 (GreCreateDisplayDC.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x1C00367D0 (HmgIncrementShareReferenceCount.c)
 *     HmgModifyHandleType @ 0x1C0078370 (HmgModifyHandleType.c)
 *     HmgAlloc @ 0x1C0095E80 (HmgAlloc.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, __int64 a2, int a3)
{
  int v4; // ebp
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  _OWORD *v9; // rax
  _OWORD *v10; // rcx
  __int64 v11; // r9
  __int128 v12; // xmm1
  __int128 v13; // xmm1
  _OWORD *v14; // rcx
  HPALETTE *v15; // rax
  __int128 v16; // xmm1
  __int64 v17; // rax

  *((_QWORD *)this + 1) = 0LL;
  v4 = a2;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 4) = 0;
  if ( (unsigned int)a2 <= 2 )
  {
    LOBYTE(a2) = 1;
    v6 = (_QWORD *)HmgAlloc(2560LL, a2, 17LL);
    *(_QWORD *)this = v6;
    v7 = v6;
    if ( v6 )
    {
      if ( a3 )
        HmgModifyHandleType(*v6 | 0x210000LL);
      v8 = 3LL;
      v9 = v7 + 70;
      v10 = &DcAttrDefault;
      v11 = 3LL;
      do
      {
        *v9 = *v10;
        v9[1] = v10[1];
        v9[2] = v10[2];
        v9[3] = v10[3];
        v9[4] = v10[4];
        v9[5] = v10[5];
        v9[6] = v10[6];
        v9 += 8;
        v12 = v10[7];
        v10 += 8;
        *(v9 - 1) = v12;
        --v11;
      }
      while ( v11 );
      *v9 = *v10;
      v13 = v10[1];
      v7[10] = v7 + 70;
      v14 = v7 + 11;
      v9[1] = v13;
      v15 = &dclevelDefault;
      do
      {
        *v14 = *(_OWORD *)v15;
        v14[1] = *((_OWORD *)v15 + 1);
        v14[2] = *((_OWORD *)v15 + 2);
        v14[3] = *((_OWORD *)v15 + 3);
        v14[4] = *((_OWORD *)v15 + 4);
        v14[5] = *((_OWORD *)v15 + 5);
        v14[6] = *((_OWORD *)v15 + 6);
        v14 += 8;
        v16 = *((_OWORD *)v15 + 7);
        v15 += 16;
        *(v14 - 1) = v16;
        --v8;
      }
      while ( v8 );
      *v14 = *(_OWORD *)v15;
      v14[1] = *((_OWORD *)v15 + 1);
      v14[2] = *((_OWORD *)v15 + 2);
      v14[3] = *((_OWORD *)v15 + 3);
      v14[4] = *((_OWORD *)v15 + 4);
      *((_QWORD *)v14 + 10) = v15[10];
      HmgIncrementShareReferenceCount(*(struct _BASEOBJECT **)(*(_QWORD *)this + 144LL));
      HmgIncrementShareReferenceCount(*(struct _BASEOBJECT **)(*(_QWORD *)this + 152LL));
      HmgIncrementShareReferenceCount(*(struct _BASEOBJECT **)(*(_QWORD *)this + 104LL));
      *((_DWORD *)v7 + 8) = v4;
      *(_QWORD *)((char *)v7 + 36) = 0LL;
      *((_DWORD *)v7 + 11) = 0;
      v7[199] = 0LL;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 8LL) = 1179679;
      v17 = *(_QWORD *)this + 240LL;
      v7[274] = 0LL;
      v7[207] = v17;
      v7[225] = v17;
      v7[243] = v17;
      v7[261] = v17;
      v7[272] = 0LL;
      *((_DWORD *)v7 + 546) = 0;
      *(_DWORD *)(*(_QWORD *)this + 2524LL) = -1;
      *(_WORD *)(*(_QWORD *)this + 2520LL) = -1;
      v7[192] = 0LL;
      v7[313] = 0LL;
      v7[314] = 0LL;
    }
  }
  return this;
}
