/*
 * XREFs of ?ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@@@Z @ 0x180172DFC
 * Callers:
 *     ?GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180173320 (-GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180173C30 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_S.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CNaturalAnimation::ExpressionValueFromInternalValue(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 result; // rax
  _OWORD v10[4]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+60h] [rbp-28h]
  const void *retaddr; // [rsp+88h] [rbp+0h]

  memset_0(v10, 0, sizeof(v10));
  v6 = v10[1];
  *(_OWORD *)a3 = v10[0];
  LODWORD(v11) = 18;
  v7 = v10[2];
  *(_OWORD *)(a3 + 16) = v6;
  BYTE4(v11) = 0;
  v8 = v10[3];
  *(_OWORD *)(a3 + 32) = v7;
  *(_QWORD *)&v7 = v11;
  *(_OWORD *)(a3 + 48) = v8;
  *(_QWORD *)(a3 + 64) = v7;
  result = *(unsigned int *)(a1 + 136);
  switch ( (_DWORD)result )
  {
    case 0x12:
      *(_DWORD *)a3 = *a2;
      *(_DWORD *)(a3 + 64) = 18;
      break;
    case 0x23:
      *(_DWORD *)(a3 + 64) = 35;
      *(_QWORD *)a3 = *(_QWORD *)a2;
      break;
    case 0x34:
      *(_DWORD *)(a3 + 64) = 52;
      *(_QWORD *)a3 = *(_QWORD *)a2;
      result = (unsigned int)a2[2];
      *(_DWORD *)(a3 + 8) = result;
      break;
    default:
      ModuleFailFastForHRESULT(-2147467259, retaddr);
  }
  *(_BYTE *)(a3 + 68) = 1;
  return result;
}
