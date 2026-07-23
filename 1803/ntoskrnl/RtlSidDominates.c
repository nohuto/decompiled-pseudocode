/*
 * XREFs of RtlSidDominates @ 0x14005CC30
 * Callers:
 *     SepMandatorySubProcessToken @ 0x14006B9C8 (SepMandatorySubProcessToken.c)
 *     RtlpNewSecurityObject @ 0x1404C43A0 (RtlpNewSecurityObject.c)
 *     SepValidLabelSubjectContext @ 0x1404EBF4C (SepValidLabelSubjectContext.c)
 *     SepAdjustPrivileges @ 0x1404EC418 (SepAdjustPrivileges.c)
 *     SeIsTokenAssignableToProcess @ 0x140562F14 (SeIsTokenAssignableToProcess.c)
 *     SeTokenCanImpersonate @ 0x140599E60 (SeTokenCanImpersonate.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 */

NTSTATUS __cdecl RtlSidDominates(PSID Sid1, PSID Sid2, PBOOLEAN Dominates)
{
  int v4; // r9d
  int v7; // eax
  __int16 v8; // cx
  int v9; // ebp
  __int16 v10; // si
  int v11; // eax
  int v12; // ecx
  BOOLEAN v13; // al
  unsigned int v15; // edx

  *Dominates = 0;
  v4 = *(_DWORD *)((char *)Sid1 + 2);
  if ( !v4 )
    v4 = *((unsigned __int16 *)Sid1 + 3) - 4096;
  if ( !v4 )
  {
    v7 = *(_DWORD *)((char *)Sid2 + 2);
    if ( !v7 )
      v7 = *((unsigned __int16 *)Sid2 + 3) - 4096;
    if ( !v7 )
    {
      v8 = *(_WORD *)Sid1;
      v9 = (unsigned __int8)HIBYTE(*(_WORD *)Sid1);
      v10 = HIBYTE(*(_WORD *)Sid2);
      if ( *(_WORD *)Sid1 == *(_WORD *)Sid2 )
      {
        v11 = memcmp(Sid1, Sid2, 4 * (unsigned int)HIBYTE(v8) + 8);
        v12 = v9;
        if ( !v11 )
          goto LABEL_9;
      }
      else
      {
        v12 = (unsigned __int8)HIBYTE(*(_WORD *)Sid1);
      }
      if ( (_BYTE)v9 )
        v15 = *((_DWORD *)Sid1 + (unsigned int)(v12 - 1) + 2);
      else
        v15 = 0;
      if ( (_BYTE)v10 && v15 < *((_DWORD *)Sid2 + (unsigned int)(unsigned __int8)v10 + 1) )
      {
        v13 = 0;
        goto LABEL_10;
      }
LABEL_9:
      v13 = 1;
LABEL_10:
      *Dominates = v13;
      return 0;
    }
  }
  return -1073741811;
}
