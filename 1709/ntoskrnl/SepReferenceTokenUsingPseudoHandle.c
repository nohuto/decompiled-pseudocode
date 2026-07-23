/*
 * XREFs of SepReferenceTokenUsingPseudoHandle @ 0x14006A3A0
 * Callers:
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     SepReferenceTokenByHandle @ 0x140076550 (SepReferenceTokenByHandle.c)
 * Callees:
 *     SepSidFromProcessProtection @ 0x14006A598 (SepSidFromProcessProtection.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     PsReferenceImpersonationTokenEx @ 0x14049D120 (PsReferenceImpersonationTokenEx.c)
 *     PsReferenceEffectiveToken @ 0x14049D4B0 (PsReferenceEffectiveToken.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x14056EE78 (RtlIsValidProcessTrustLabelSid.c)
 */

__int64 __fastcall SepReferenceTokenUsingPseudoHandle(__int64 a1, PACCESS_TOKEN *a2, _BYTE *a3, _QWORD *a4)
{
  bool v7; // zf
  unsigned int CurrentThread; // ecx
  void *v9; // rax
  void *v10; // rax
  void *v11; // r9
  void *v12; // r10
  __int64 v14; // r11
  __int64 v15; // r10
  int v16; // [rsp+30h] [rbp-38h] BYREF
  char v17; // [rsp+70h] [rbp+8h] BYREF
  char v18; // [rsp+78h] [rbp+10h] BYREF
  char v19; // [rsp+80h] [rbp+18h] BYREF
  int v20; // [rsp+88h] [rbp+20h] BYREF

  *a2 = 0LL;
  *a3 = 0;
  *a4 = 0LL;
  if ( a1 == -4 )
  {
    *a2 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
    return 0LL;
  }
  v7 = a1 == -5;
  CurrentThread = (unsigned int)KeGetCurrentThread();
  if ( v7 )
  {
    v9 = (void *)PsReferenceImpersonationTokenEx(
                   CurrentThread,
                   0,
                   (unsigned int)&v19,
                   (unsigned int)&v18,
                   (__int64)&v20,
                   (__int64)&v17);
    if ( !v9 )
      return 3221225596LL;
  }
  else
  {
    v9 = (void *)PsReferenceEffectiveToken(
                   CurrentThread,
                   (unsigned int)&v16,
                   (unsigned int)&v18,
                   (unsigned int)&v20,
                   (__int64)&v17);
    if ( v16 != 2 )
      goto LABEL_4;
  }
  if ( v20 )
  {
LABEL_4:
    *a3 = 0;
    *a4 = 0LL;
    v10 = (void *)SepSidFromProcessProtection(&v17);
    if ( v10 && !RtlIsValidProcessTrustLabelSid(v10) )
      goto LABEL_19;
    if ( v12 )
    {
      if ( !RtlIsValidProcessTrustLabelSid(v12) )
        goto LABEL_19;
      if ( v14 )
      {
        if ( *(_DWORD *)(v14 + 8) >= *(_DWORD *)(v15 + 8) && *(_DWORD *)(v14 + 12) >= *(_DWORD *)(v15 + 12) )
          goto LABEL_6;
        goto LABEL_19;
      }
      if ( *(_DWORD *)(v15 + 8) )
      {
LABEL_19:
        *a3 = 1;
        *a4 = v14;
      }
    }
LABEL_6:
    *a2 = v11;
    return 0LL;
  }
  ObfDereferenceObjectWithTag(v9, 0x746C6644u);
  return 3221225638LL;
}
