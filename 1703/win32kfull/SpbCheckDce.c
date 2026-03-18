/*
 * XREFs of SpbCheckDce @ 0x1C00E3550
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C006CCF4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     RevalidateDCE @ 0x1C00E3440 (RevalidateDCE.c)
 *     SpbCheck @ 0x1C01E3F34 (SpbCheck.c)
 * Callees:
 *     GetStyleWindow @ 0x1C0067050 (GetStyleWindow.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     SpbCheckRect @ 0x1C01E4040 (SpbCheckRect.c)
 */

__int64 __fastcall SpbCheckDce(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rax
  int v6; // edx
  LONG bottom; // r14d
  int v8; // ecx
  LONG left; // edi
  LONG right; // esi
  LONG top; // r15d
  unsigned int v12; // r12d
  __int64 StyleWindow; // rax
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rbx
  struct tagRECT v17; // [rsp+20h] [rbp-20h] BYREF

  result = GreGetBounds(*(_QWORD *)(a1 + 8), &v17, 0LL);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( !v3 || (v4 = *(_DWORD *)(a1 + 64), (v4 & 0x4000) != 0) || v4 < 0 )
    {
      bottom = v17.bottom;
      right = v17.right;
      top = v17.top;
      left = v17.left;
    }
    else
    {
      v5 = *(_QWORD *)(v3 + 40);
      v6 = *(_DWORD *)(v5 + 32);
      bottom = v6 + v17.bottom;
      v8 = *(_DWORD *)(v5 + 28);
      left = v8 + v17.left;
      right = v8 + v17.right;
      top = v6 + v17.top;
      v17.left += v8;
      v17.top += v6;
      v17.right += v8;
      v17.bottom += v6;
    }
    v12 = *(_DWORD *)(a1 + 64);
    if ( (v12 & 0x4000) != 0 )
    {
      StyleWindow = GetStyleWindow(*(_QWORD *)(a1 + 16), 2848);
      if ( StyleWindow )
      {
        v14 = *(_DWORD *)(StyleWindow + 132);
        v15 = *(_DWORD *)(StyleWindow + 128);
        v17.left = v15 + left;
        v17.right = v15 + right;
        v17.top = v14 + top;
        v17.bottom = v14 + bottom;
      }
    }
    v16 = *(_QWORD *)(a1 + 16);
    result = IntersectRect(&v17.left, &v17.left, (int *)(v16 + 128));
    if ( (_DWORD)result )
      return SpbCheckRect((struct tagWND *)v16, &v17, v12);
  }
  return result;
}
