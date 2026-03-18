/*
 * XREFs of GreSetBitmapDimension @ 0x1C029C980
 * Callers:
 *     NtGdiSetBitmapDimension @ 0x1C028EA00 (NtGdiSetBitmapDimension.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBitmapDimension(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rax
  DYNAMICMODECHANGESHARELOCK *v11; // rcx
  __int64 v12; // rbx
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v14);
  LOBYTE(v9) = 5;
  v10 = HmgShareLockCheck(a1, v9);
  v12 = v10;
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 112) & 0x4000000) != 0 )
    {
      if ( a4 )
        *a4 = *(_QWORD *)(v10 + 152);
      v14[1] = __PAIR64__(a3, a2);
      v8 = 1;
      *(_QWORD *)(v10 + 152) = __PAIR64__(a3, a2);
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  if ( v12 )
    DEC_SHARE_REF_CNT(v12);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v11);
  return v8;
}
