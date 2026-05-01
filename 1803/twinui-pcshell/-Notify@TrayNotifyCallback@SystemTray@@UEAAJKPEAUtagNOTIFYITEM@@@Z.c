/*
 * XREFs of ?Notify@TrayNotifyCallback@SystemTray@@UEAAJKPEAUtagNOTIFYITEM@@@Z @ 0x180266380
 * Callers:
 *     <none>
 * Callees:
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x1802662A0 (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 */

__int64 __fastcall SystemTray::TrayNotifyCallback::Notify(
        HSTRING *this,
        unsigned int a2,
        struct tagNOTIFYITEM *a3,
        const char *a4)
{
  PCWSTR StringRawBuffer; // rax
  char *v7; // rcx
  signed __int64 v8; // rax
  __int64 v9; // r8
  int v10; // edx
  const WCHAR *v11; // r9
  char **v12; // rcx
  unsigned __int64 v13; // rdx
  char *v14; // r14
  __int64 v15; // rbx
  HICON v16; // r15
  HICON v17; // r14
  DWORD LastError; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    if ( a2 <= 1 && *((_QWORD *)a3 + 10) )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
      v7 = (char *)*((_QWORD *)a3 + 10);
      v8 = (char *)StringRawBuffer - v7;
      do
      {
        v9 = *(unsigned __int16 *)&v7[v8];
        v10 = *(unsigned __int16 *)v7 - (_DWORD)v9;
        if ( v10 )
          break;
        v7 += 2;
      }
      while ( (_DWORD)v9 );
      if ( !v10 )
      {
        v11 = &word_18035ABCC;
        if ( *(_QWORD *)a3 )
          v11 = *(const WCHAR **)a3;
        v12 = (char **)(this + 3);
        v13 = -1LL;
        do
          ++v13;
        while ( v11[v13] );
        if ( v13 > (unsigned __int64)this[6] )
        {
          std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_(
            (__int64)v12,
            v13,
            v9,
            v11);
        }
        else
        {
          v14 = (char *)(this + 3);
          if ( (unsigned __int64)this[6] >= 8 )
            v14 = *v12;
          this[5] = (HSTRING)v13;
          v15 = 2 * v13;
          memmove(v14, v11, 2 * v13);
          *(_WORD *)&v14[v15] = 0;
        }
        v16 = CopyIcon(*((HICON *)a3 + 2));
        v17 = (HICON)this[7];
        if ( v17 )
        {
          LastError = GetLastError();
          DestroyIcon(v17);
          SetLastError(LastError);
        }
        this[7] = (HSTRING)v16;
        *((_OWORD *)this + 4) = *(_OWORD *)((char *)a3 + 40);
        *((_BYTE *)this + 80) = *((_DWORD *)a3 + 22) != 0;
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2F,
                           (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
                           a4);
  }
  return result;
}
