/*
 * XREFs of ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1C00FF184
 * Callers:
 *     NtUserfnINCBOXSTRING @ 0x1C00FF0F0 (NtUserfnINCBOXSTRING.c)
 *     NtUserfnINLBOXSTRING @ 0x1C00FF140 (NtUserfnINLBOXSTRING.c)
 * Callees:
 *     NtUserfnINSTRINGNULL @ 0x1C0093AA0 (NtUserfnINSTRINGNULL.c)
 *     NtUserfnINSTRING @ 0x1C00FF280 (NtUserfnINSTRING.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _InBoxString(
        int a1,
        struct tagWND *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        int a8)
{
  __int64 result; // rax
  int v11; // eax
  int v12; // r8d
  bool v13; // dl
  bool v14; // zf
  int v15; // esi
  int v16; // ecx
  __int64 (__fastcall *v17)(int, int, int, int, __int64); // r11

  if ( (unsigned __int64)a2 - 2 > 0xFFFFFFFFFFFFFFFBuLL || !gptiCurrent )
    return -1LL;
  if ( a1 == 678 )
  {
    v11 = *((_DWORD *)a2 + 17);
    v12 = 399;
    v13 = (v11 & 0x40) != 0;
    v14 = (v11 & 0x30) == 0;
  }
  else
  {
    v16 = *((_DWORD *)a2 + 17);
    v12 = 332;
    v13 = (v16 & 0x200) != 0;
    v14 = (v16 & 0x30) == 0;
  }
  v15 = *(_DWORD *)(gptiCurrent + 1372LL);
  if ( v13 || v14 )
  {
    *(_DWORD *)(gptiCurrent + 1372LL) = 2;
    if ( a3 == v12 )
      result = NtUserfnINSTRINGNULL((__int64)a2, a3, a4, a5, a6, a7, a8);
    else
      result = NtUserfnINSTRING((_DWORD)a2, a3, a4, a5, a6, a7, a8);
    goto LABEL_9;
  }
  v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))mpFnidPfn[((_BYTE)a7 + 6) & 0x1F];
  if ( v17 == xxxSendMessageFF || v17 == xxxWrapSendMessageBSM )
    return -1LL;
  *(_DWORD *)(gptiCurrent + 1372LL) = 1;
  result = v17((int)a2, a3, a4, a5, a6);
LABEL_9:
  *(_DWORD *)(gptiCurrent + 1372LL) = v15;
  return result;
}
