/*
 * XREFs of ?GetSize@CBitmapLock@@UEAAJPEAI0@Z @ 0x1800AA9A0
 * Callers:
 *     ?GetSize@CBitmapLock@@W7EAAJPEAI0@Z @ 0x18004B690 (-GetSize@CBitmapLock@@W7EAAJPEAI0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800470A4 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBitmapLock::GetSize(CBitmapLock *this, unsigned int *a2, unsigned int *a3)
{
  unsigned __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+20h] [rbp-18h]
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v6 = ((unsigned __int64)this - 56) & -(__int64)(this != (CBitmapLock *)72);
  v10 = v6;
  if ( *(_BYTE *)(v6 + 48) )
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 8));
  if ( !a2 )
  {
    v9 = 122;
LABEL_5:
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, v9);
    goto LABEL_12;
  }
  if ( !a3 )
  {
    v9 = 123;
    goto LABEL_5;
  }
  v7 = *((_BYTE *)this + 16) == 0 ? 0x88982F04 : 0;
  if ( *((_BYTE *)this + 16) )
  {
    *a2 = *((_DWORD *)this + 8);
    *a3 = *((_DWORD *)this + 9);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x7Du);
  }
LABEL_12:
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v10);
  return v7;
}
