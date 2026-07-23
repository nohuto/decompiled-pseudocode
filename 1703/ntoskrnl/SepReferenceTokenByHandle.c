/*
 * XREFs of SepReferenceTokenByHandle @ 0x1400911E0
 * Callers:
 *     NtQuerySecurityAttributesToken @ 0x1404F7910 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x140508720 (NtQueryInformationToken.c)
 * Callees:
 *     SepSidFromProcessProtection @ 0x140091C20 (SepSidFromProcessProtection.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x14047ED90 (RtlIsValidProcessTrustLabelSid.c)
 *     PsReferenceEffectiveToken @ 0x14050B1D0 (PsReferenceEffectiveToken.c)
 *     PsReferenceImpersonationTokenEx @ 0x14050C610 (PsReferenceImpersonationTokenEx.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall SepReferenceTokenByHandle(
        char *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        PVOID *a4,
        _BYTE *a5,
        _QWORD *a6)
{
  _BYTE *v6; // rdi
  _QWORD *v7; // rsi
  unsigned int v8; // ebx
  bool v11; // zf
  unsigned int CurrentThread; // ecx
  void *v13; // rax
  void *v14; // rax
  void *v15; // r9
  void *v16; // r10
  __int64 v17; // r11
  __int64 v18; // r10
  int v19; // [rsp+30h] [rbp-18h] BYREF
  int v20; // [rsp+34h] [rbp-14h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF
  char v22; // [rsp+50h] [rbp+8h] BYREF

  v6 = a5;
  v7 = a6;
  v8 = 0;
  *a5 = 0;
  *v7 = 0LL;
  if ( (unsigned __int64)(a1 + 6) > 2 )
  {
    v8 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)SeTokenObjectType, a3, &Object, 0LL);
    *a4 = Object;
    return v8;
  }
  if ( (a2 & 0xFFFFFFE7) != 0 )
    return 3221225506LL;
  *a4 = 0LL;
  *v6 = 0;
  *v7 = 0LL;
  if ( a1 == (char *)-4LL )
  {
    *a4 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
    return v8;
  }
  v11 = a1 + 5 == 0LL;
  CurrentThread = (unsigned int)KeGetCurrentThread();
  if ( !v11 )
  {
    v13 = (void *)PsReferenceEffectiveToken(
                    CurrentThread,
                    (unsigned int)&v20,
                    (unsigned int)&a6,
                    (unsigned int)&v19,
                    (__int64)&a5);
    if ( v20 == 2 && !v19 )
      goto LABEL_14;
LABEL_8:
    *v6 = 0;
    *v7 = 0LL;
    v14 = (void *)SepSidFromProcessProtection(&a5);
    if ( v14 && !RtlIsValidProcessTrustLabelSid(v14) )
      goto LABEL_25;
    if ( v16 )
    {
      if ( !RtlIsValidProcessTrustLabelSid(v16) )
        goto LABEL_25;
      if ( v17 )
      {
        if ( *(_DWORD *)(v17 + 8) >= *(_DWORD *)(v18 + 8) && *(_DWORD *)(v17 + 12) >= *(_DWORD *)(v18 + 12) )
          goto LABEL_10;
        goto LABEL_25;
      }
      if ( *(_DWORD *)(v18 + 8) )
      {
LABEL_25:
        *v6 = 1;
        *v7 = v17;
      }
    }
LABEL_10:
    *a4 = v15;
    return v8;
  }
  v13 = (void *)PsReferenceImpersonationTokenEx(
                  CurrentThread,
                  0,
                  (unsigned int)&v22,
                  (unsigned int)&a6,
                  (__int64)&v19,
                  (__int64)&a5);
  if ( v13 )
  {
    if ( !v19 )
    {
LABEL_14:
      ObfDereferenceObjectWithTag(v13, 0x746C6644u);
      return 3221225638LL;
    }
    goto LABEL_8;
  }
  return 3221225596LL;
}
