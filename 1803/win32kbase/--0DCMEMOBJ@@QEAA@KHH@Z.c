/*
 * XREFs of ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C002FA68
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002D5C0 (GreCreateDisplayDC.c)
 * Callees:
 *     HmgAlloc @ 0x1C00248F0 (HmgAlloc.c)
 *     HmgIncrementShareReferenceCount @ 0x1C002C830 (HmgIncrementShareReferenceCount.c)
 *     HmgModifyHandleType @ 0x1C0065050 (HmgModifyHandleType.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, unsigned int a2, int a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  _OWORD *v9; // rax
  _OWORD *v10; // rcx
  __int64 v11; // r9
  __int128 v12; // xmm1
  __int128 v13; // xmm1
  _OWORD *v14; // rcx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  __int64 v17; // rax

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 4) = 0;
  if ( a2 <= 2 )
  {
    v6 = (_QWORD *)HmgAlloc(0x9D8uLL, 1u, 0x11u);
    *(_QWORD *)this = v6;
    v7 = v6;
    if ( v6 )
    {
      if ( a3 )
        HmgModifyHandleType(*v6 | 0x210000LL);
      v8 = 3LL;
      v9 = v7 + 69;
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
      v7[10] = v7 + 69;
      v14 = &dclevelDefault;
      v9[1] = v13;
      v15 = v7 + 11;
      do
      {
        *v15 = *v14;
        v15[1] = v14[1];
        v15[2] = v14[2];
        v15[3] = v14[3];
        v15[4] = v14[4];
        v15[5] = v14[5];
        v15[6] = v14[6];
        v15 += 8;
        v16 = v14[7];
        v14 += 8;
        *(v15 - 1) = v16;
        --v8;
      }
      while ( v8 );
      *v15 = *v14;
      v15[1] = v14[1];
      v15[2] = v14[2];
      v15[3] = v14[3];
      v15[4] = v14[4];
      HmgIncrementShareReferenceCount(*(struct _BASEOBJECT **)(*(_QWORD *)this + 144LL));
      HmgIncrementShareReferenceCount(*(struct _BASEOBJECT **)(*(_QWORD *)this + 152LL));
      HmgIncrementShareReferenceCount(*(struct _BASEOBJECT **)(*(_QWORD *)this + 104LL));
      *((_DWORD *)v7 + 8) = a2;
      *(_QWORD *)((char *)v7 + 36) = 0LL;
      *((_DWORD *)v7 + 11) = 0;
      v7[198] = 0LL;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 8LL) = 1179679;
      v17 = *(_QWORD *)this + 184LL;
      v7[269] = 0LL;
      v7[206] = v17;
      v7[223] = v17;
      v7[240] = v17;
      v7[257] = v17;
      v7[267] = 0LL;
      *((_DWORD *)v7 + 536) = 0;
      *(_DWORD *)(*(_QWORD *)this + 2484LL) = -1;
      *(_WORD *)(*(_QWORD *)this + 2480LL) = -1;
      v7[191] = 0LL;
      v7[308] = 0LL;
      v7[309] = 0LL;
    }
  }
  return this;
}
