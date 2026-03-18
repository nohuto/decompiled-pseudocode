/*
 * XREFs of ?GetAlphaMode@CFormatConverter@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1801AB5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CFormatConverter::GetAlphaMode(CFormatConverter *this)
{
  CFormatConverter *v1; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  v3 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 8) & -(__int64)(this != (CFormatConverter *)16));
  EnterCriticalSection(v3);
  LODWORD(v1) = *((_DWORD *)v1 + 18);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v3);
  return (unsigned int)v1;
}
