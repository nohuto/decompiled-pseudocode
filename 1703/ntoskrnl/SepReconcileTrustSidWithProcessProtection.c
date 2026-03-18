/*
 * XREFs of SepReconcileTrustSidWithProcessProtection @ 0x140091BA0
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x140026074 (SepReferenceTokenUsingPseudoHandle.c)
 *     SeCreateClientSecurityEx @ 0x14050AD10 (SeCreateClientSecurityEx.c)
 *     SeCreateClientSecurity @ 0x14050B3A0 (SeCreateClientSecurity.c)
 * Callees:
 *     SepSidFromProcessProtection @ 0x140091C20 (SepSidFromProcessProtection.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x14047ED90 (RtlIsValidProcessTrustLabelSid.c)
 */

__int64 __fastcall SepReconcileTrustSidWithProcessProtection(__int64 a1, __int64 a2, _BYTE *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // r10

  *a3 = 0;
  *a4 = 0LL;
  result = SepSidFromProcessProtection(a2);
  if ( result )
  {
    result = RtlIsValidProcessTrustLabelSid(result, v6, v7, v8);
    if ( !(_BYTE)result )
      goto LABEL_12;
  }
  if ( v9 )
  {
    result = RtlIsValidProcessTrustLabelSid(v9, v6, v7, v8);
    if ( (_BYTE)result )
    {
      if ( v10 )
      {
        result = *(unsigned int *)(v11 + 8);
        if ( *(_DWORD *)(v10 + 8) >= (unsigned int)result )
        {
          result = *(unsigned int *)(v11 + 12);
          if ( *(_DWORD *)(v10 + 12) >= (unsigned int)result )
            return result;
        }
      }
      else if ( !*(_DWORD *)(v11 + 8) )
      {
        return result;
      }
    }
LABEL_12:
    *a3 = 1;
    *v8 = v10;
  }
  return result;
}
