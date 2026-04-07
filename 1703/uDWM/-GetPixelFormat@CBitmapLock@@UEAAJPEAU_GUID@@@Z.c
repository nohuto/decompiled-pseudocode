/*
 * XREFs of ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x1800A3110
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18003FFFC (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x1800A1750 (-DXGIFormatToPixelFormat@@YA-AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z.c)
 *     ?MilPfToWic@@YAJW4Enum@MilPixelFormat@@PEAU_GUID@@@Z @ 0x1800A2F2C (-MilPfToWic@@YAJW4Enum@MilPixelFormat@@PEAU_GUID@@@Z.c)
 */

__int64 __fastcall CBitmapLock::GetPixelFormat(CBitmapLock *this, struct _GUID *a2)
{
  unsigned __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  unsigned __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = ((unsigned __int64)this - 64) & -(__int64)(this != (CBitmapLock *)80);
  v9 = v4;
  if ( *(_BYTE *)(v4 + 48) )
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 8));
  v5 = DXGIFormatToPixelFormat(*((_DWORD *)this + 9), *((_DWORD *)this + 10) == 1);
  v6 = MilPfToWic(v5, a2);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0xC8u);
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v9);
  return v7;
}
