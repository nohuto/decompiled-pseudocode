/*
 * XREFs of ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0054F7C
 * Callers:
 *     GreCreateDisplayDC @ 0x1C0055870 (GreCreateDisplayDC.c)
 * Callees:
 *     HmgModifyHandleType @ 0x1C001ECE0 (HmgModifyHandleType.c)
 *     HmgIncrementShareReferenceCount @ 0x1C004C880 (HmgIncrementShareReferenceCount.c)
 *     HmgAlloc @ 0x1C0054040 (HmgAlloc.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, unsigned int a2, int a3)
{
  struct HOBJ__ *v6; // rax
  struct HOBJ__ *v7; // rbx
  __int64 v9; // rdx
  _OWORD *v10; // rax
  _OWORD *v11; // rcx
  __int64 v12; // r9
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  _OWORD *v15; // rcx
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  __int64 v18; // rax

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 4) = 0;
  if ( a2 <= 2 )
  {
    v6 = HmgAlloc(0xA00uLL, 1u, 0x11u);
    *(_QWORD *)this = v6;
    v7 = v6;
    if ( v6 )
    {
      if ( a3 )
        HmgModifyHandleType(*(_QWORD *)v6 | 0x210000LL);
      v9 = 3LL;
      v10 = (_OWORD *)((char *)v7 + 560);
      v11 = &DcAttrDefault;
      v12 = 3LL;
      do
      {
        *v10 = *v11;
        v10[1] = v11[1];
        v10[2] = v11[2];
        v10[3] = v11[3];
        v10[4] = v11[4];
        v10[5] = v11[5];
        v10[6] = v11[6];
        v10 += 8;
        v13 = v11[7];
        v11 += 8;
        *(v10 - 1) = v13;
        --v12;
      }
      while ( v12 );
      *v10 = *v11;
      v14 = v11[1];
      *((_QWORD *)v7 + 10) = (char *)v7 + 560;
      v15 = (_OWORD *)((char *)v7 + 88);
      v10[1] = v14;
      v16 = &dclevelDefault;
      do
      {
        *v15 = *v16;
        v15[1] = v16[1];
        v15[2] = v16[2];
        v15[3] = v16[3];
        v15[4] = v16[4];
        v15[5] = v16[5];
        v15[6] = v16[6];
        v15 += 8;
        v17 = v16[7];
        v16 += 8;
        *(v15 - 1) = v17;
        --v9;
      }
      while ( v9 );
      *v15 = *v16;
      v15[1] = v16[1];
      v15[2] = v16[2];
      v15[3] = v16[3];
      v15[4] = v16[4];
      *((_QWORD *)v15 + 10) = *((_QWORD *)v16 + 10);
      HmgIncrementShareReferenceCount(*(struct OBJECT **)(*(_QWORD *)this + 144LL));
      HmgIncrementShareReferenceCount(*(struct OBJECT **)(*(_QWORD *)this + 152LL));
      HmgIncrementShareReferenceCount(*(struct OBJECT **)(*(_QWORD *)this + 104LL));
      *((_DWORD *)v7 + 8) = a2;
      *(_QWORD *)((char *)v7 + 36) = 0LL;
      *((_DWORD *)v7 + 11) = 0;
      *((_QWORD *)v7 + 199) = 0LL;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 8LL) = 1179679;
      v18 = *(_QWORD *)this + 240LL;
      *((_QWORD *)v7 + 274) = 0LL;
      *((_QWORD *)v7 + 207) = v18;
      *((_QWORD *)v7 + 225) = v18;
      *((_QWORD *)v7 + 243) = v18;
      *((_QWORD *)v7 + 261) = v18;
      *((_QWORD *)v7 + 272) = 0LL;
      *((_DWORD *)v7 + 546) = 0;
      *(_DWORD *)(*(_QWORD *)this + 2524LL) = -1;
      *(_WORD *)(*(_QWORD *)this + 2520LL) = -1;
      *((_QWORD *)v7 + 192) = 0LL;
      *((_QWORD *)v7 + 313) = 0LL;
      *((_QWORD *)v7 + 314) = 0LL;
    }
  }
  return this;
}
