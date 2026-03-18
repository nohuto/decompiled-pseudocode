/*
 * XREFs of ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x1801A9C70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x1800C9B68 (-DXGIFormatToPixelFormat@@YA-AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z.c)
 */

__int64 __fastcall CBitmapLock::GetPixelFormat(CBitmapLock *this, struct _GUID *a2)
{
  int v4; // eax
  GUID v5; // xmm0
  unsigned int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 8) & -(__int64)(this != (CBitmapLock *)24));
  EnterCriticalSection(v8);
  v4 = DXGIFormatToPixelFormat(*((_DWORD *)this + 19), *((_DWORD *)this + 20) == 1);
  if ( v4 > 31 )
  {
    switch ( v4 )
    {
      case ',':
        v5 = GUID_WICPixelFormat40bppCMYKAlpha;
        break;
      case '-':
        v5 = GUID_WICPixelFormat80bppCMYKAlpha;
        break;
      case 'C':
        v5 = GUID_WICPixelFormat8bppAlpha;
        break;
      case 'D':
        v5 = GUID_WICPixelFormat32bppRGBA;
        break;
      case 'E':
        v5 = GUID_WICPixelFormat32bppPRGBA;
        break;
      case 'H':
        v5 = GUID_WICPixelFormat64bppBGRA;
        break;
      case 'I':
        v5 = GUID_WICPixelFormat64bppPBGRA;
        break;
      case 'G':
        v5 = GUID_WICPixelFormat48bppBGR;
        break;
      case 'F':
        v5 = GUID_WICPixelFormat16bppBGRA5551;
        break;
      case 'J':
        v5 = GUID_WICPixelFormat48bppBGRFixedPoint;
        break;
      case 'K':
        v5 = GUID_WICPixelFormat64bppBGRAFixedPoint;
        break;
      case 'L':
        v5 = GUID_WICPixelFormat96bppRGBFloat;
        break;
      case 'M':
        v5 = GUID_WICPixelFormat32bppRGB;
        break;
      case 'N':
        v5 = GUID_WICPixelFormat64bppRGB;
        break;
      case 'O':
        v5 = GUID_WICPixelFormat8bppY;
        break;
      case 'P':
        v5 = GUID_WICPixelFormat8bppCb;
        break;
      case 'Q':
        v5 = GUID_WICPixelFormat8bppCr;
        break;
      case 'R':
        v5 = GUID_WICPixelFormat16bppCbCr;
        break;
      default:
        v6 = -2147467259;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xC8u);
        goto LABEL_42;
    }
    *a2 = v5;
  }
  else
  {
    *a2 = GUID_WICPixelFormatDontCare;
    a2->Data4[7] = v4;
  }
  v6 = 0;
LABEL_42:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return v6;
}
