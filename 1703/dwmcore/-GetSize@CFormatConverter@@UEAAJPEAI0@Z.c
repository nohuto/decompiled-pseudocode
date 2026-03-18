/*
 * XREFs of ?GetSize@CFormatConverter@@UEAAJPEAI0@Z @ 0x1801AB770
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CFormatConverter::GetSize(CFormatConverter *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF

  v6 = -2003292404;
  v9 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 8) & -(__int64)(this != (CFormatConverter *)16));
  EnterCriticalSection(v9);
  if ( !a2 )
  {
    v8 = 559;
LABEL_3:
    v6 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v8);
    goto LABEL_4;
  }
  if ( !a3 )
  {
    v8 = 560;
    goto LABEL_3;
  }
  if ( *((_QWORD *)this + 6) )
  {
    v6 = 0;
    *a2 = *((_DWORD *)this + 20);
    *a3 = *((_DWORD *)this + 21);
    goto LABEL_5;
  }
LABEL_4:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x23Au);
LABEL_5:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v6;
}
