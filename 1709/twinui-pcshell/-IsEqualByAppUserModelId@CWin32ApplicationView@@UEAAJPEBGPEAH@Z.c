/*
 * XREFs of ?IsEqualByAppUserModelId@CWin32ApplicationView@@UEAAJPEBGPEAH@Z @ 0x18007F7D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::IsEqualByAppUserModelId(
        CWin32ApplicationView *this,
        const unsigned __int16 *a2,
        int *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  const WCHAR *v7; // rcx
  const WCHAR *v8; // r8
  LPCWCH lpString1; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]
  __int64 v12; // [rsp+48h] [rbp-10h]

  *a3 = 0;
  lpString1 = 0LL;
  v11 = -1LL;
  v12 = -1LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, LPCWCH *))(**((_QWORD **)this + 24) + 32LL))(
         *((_QWORD *)this + 24),
         &lpString1);
  if ( v5 >= 0 )
  {
    LODWORD(v6) = v11;
    if ( v11 == -1 )
    {
      if ( lpString1 )
      {
        v6 = -1LL;
        do
          ++v6;
        while ( lpString1[v6] );
      }
      else
      {
        LODWORD(v6) = 0;
      }
    }
    v7 = &word_18021F3A8;
    v8 = &word_18021F3A8;
    if ( a2 )
      v8 = a2;
    if ( lpString1 )
      v7 = lpString1;
    *a3 = CompareStringOrdinal(v7, v6, v8, -(a2 != 0LL), 1) == 2;
    v5 = 0;
  }
  if ( lpString1 )
    CoTaskMemFree((LPVOID)lpString1);
  return (unsigned int)v5;
}
