/*
 * XREFs of ?BeginInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800D6240
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x18006695C (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::BeginInitialize(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  PCWSTR StringRawBuffer; // rax
  __int64 v12; // r8
  unsigned __int64 *v13; // rcx
  unsigned __int64 v14; // rdx
  char *v15; // r14
  __int64 v16; // rbx
  int v17; // eax
  unsigned int v18; // ebx
  __int16 v19; // cx
  __int16 v20; // r8
  __int16 v21; // dx
  char v22; // al
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int16 v24; // [rsp+40h] [rbp+8h] BYREF
  __int16 v25; // [rsp+42h] [rbp+Ah]
  __int16 v26; // [rsp+44h] [rbp+Ch]

  try
  {
    v2 = *((_QWORD *)this + 56);
    v3 = *((_QWORD *)this + 2);
    if ( v2 != v3 )
    {
      if ( v3 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*((_QWORD *)this + 2));
        v2 = *((_QWORD *)this + 56);
      }
      *((_QWORD *)this + 56) = v3;
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 2) + 56LL))(
           *((_QWORD *)this + 2),
           (char *)this + 512,
           (char *)this + 504);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v8 = *((_QWORD *)this + 2);
      WindowsDeleteString(*((HSTRING *)this + 3));
      *((_QWORD *)this + 3) = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 24LL))(v8, (char *)this + 24);
      v10 = v9;
      if ( v9 >= 0 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 3), 0LL);
        v13 = (unsigned __int64 *)((char *)this + 456);
        v14 = -1LL;
        do
          ++v14;
        while ( StringRawBuffer[v14] );
        if ( v14 > *((_QWORD *)this + 60) )
        {
          std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_(
            v13,
            v14,
            v12,
            StringRawBuffer);
        }
        else
        {
          v15 = (char *)this + 456;
          if ( *((_QWORD *)this + 60) >= 8uLL )
            v15 = (char *)*v13;
          *((_QWORD *)this + 59) = v14;
          v16 = 2 * v14;
          memmove(v15, StringRawBuffer, 2 * v14);
          *(_WORD *)&v15[v16] = 0;
        }
        v17 = (*(__int64 (__fastcall **)(_QWORD, __int16 *))(**((_QWORD **)this + 2) + 32LL))(
                *((_QWORD *)this + 2),
                &v24);
        v18 = v17;
        if ( v17 >= 0 )
        {
          v19 = v25;
          *((_WORD *)this + 247) = v25;
          v20 = v24;
          *((_WORD *)this + 246) = v24;
          v21 = v26;
          *((_WORD *)this + 248) = v26;
          *((_WORD *)this + 135) = v19;
          *((_WORD *)this + 134) = v20;
          *((_WORD *)this + 136) = v21;
          *((_DWORD *)this + 56) = *((_DWORD *)this + 2);
          v6 = 255LL;
          *((_BYTE *)this + 286) = -1;
          if ( v19 != -256 || v20 != 255 || (v22 = 1, v21 != 2) )
            v22 = 0;
          *((_BYTE *)this + 784) = v22;
          if ( v22 )
            *((_BYTE *)this + 277) = 1;
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x133,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
            (const char *)(unsigned int)v17);
          result = v18;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x130,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
          (const char *)(unsigned int)v9);
        result = v10;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12E,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
        (const char *)(unsigned int)v4);
      result = v5;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x147,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractions"
                                    "ourcecontroller.cpp",
                           (const char *)v6);
  }
  return result;
}
