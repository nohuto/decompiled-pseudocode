/*
 * XREFs of ?IsValid@CSid@ATL@@QEBA_NXZ @ 0x180013658
 * Callers:
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x1800136D8 (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18002E6BC (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ATL::CSid::IsValid(ATL::CSid *this)
{
  return *((_BYTE *)this + 76) && IsValidSid((char *)this + 8);
}
