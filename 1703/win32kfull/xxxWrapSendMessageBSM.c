/*
 * XREFs of xxxWrapSendMessageBSM @ 0x1C00C6F60
 * Callers:
 *     <none>
 * Callees:
 *     IsPrivileged @ 0x1C00C6ED0 (IsPrivileged.c)
 *     xxxSendMessageBSM @ 0x1C00C9B50 (xxxSendMessageBSM.c)
 */

__int64 __fastcall xxxWrapSendMessageBSM(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 result; // rax
  __int128 v10; // [rsp+48h] [rbp-60h] BYREF
  __int128 v11; // [rsp+58h] [rbp-50h]
  __int64 v12; // [rsp+68h] [rbp-40h]

  if ( a5 >= W32UserProbeAddress )
    *W32UserProbeAddress = 0;
  *(_OWORD *)a5 = *(_OWORD *)a5;
  *(_OWORD *)(a5 + 16) = *(_OWORD *)(a5 + 16);
  *(_QWORD *)(a5 + 32) = *(_QWORD *)(a5 + 32);
  v10 = *(_OWORD *)a5;
  v11 = *(_OWORD *)(a5 + 16);
  v12 = *(_QWORD *)(a5 + 32);
  if ( (v10 & 0x10) != 0 && !(unsigned int)IsPrivileged(psTcb) )
  {
    LODWORD(v10) = v10 & 0xFFFFFFEF;
    *(_OWORD *)a5 = v10;
    *(_OWORD *)(a5 + 16) = v11;
    *(_QWORD *)(a5 + 32) = v12;
  }
  result = (int)xxxSendMessageBSM(a1, a2, a3, a4, &v10, 0);
  if ( !(_DWORD)result && (BYTE4(v10) & 1) != 0 )
  {
    *(_OWORD *)a5 = v10;
    *(_OWORD *)(a5 + 16) = v11;
    *(_QWORD *)(a5 + 32) = v12;
  }
  return result;
}
