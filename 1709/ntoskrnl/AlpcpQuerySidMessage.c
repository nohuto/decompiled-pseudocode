/*
 * XREFs of AlpcpQuerySidMessage @ 0x140505104
 * Callers:
 *     NtAlpcQueryInformationMessage @ 0x140505F58 (NtAlpcQueryInformationMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     AlpcpQuerySidToken @ 0x140505068 (AlpcpQuerySidToken.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x140505178 (AlpcpGetEffectiveTokenMessage.c)
 */

__int64 __fastcall AlpcpQuerySidMessage(int a1, int a2, void *a3, unsigned int a4, _DWORD *a5)
{
  __int64 result; // rax
  unsigned int SidToken; // ebx
  _BYTE v9[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v10; // [rsp+38h] [rbp-60h] BYREF
  __int64 v11; // [rsp+40h] [rbp-58h] BYREF
  PVOID Object; // [rsp+50h] [rbp-48h]

  result = AlpcpGetEffectiveTokenMessage(a1, a2, (unsigned int)&v10, (unsigned int)&v11, (__int64)v9);
  if ( (int)result >= 0 )
  {
    SidToken = AlpcpQuerySidToken(v10, a3, a4, a5);
    if ( v9[0] )
      ObfDereferenceObject(Object);
    return SidToken;
  }
  return result;
}
