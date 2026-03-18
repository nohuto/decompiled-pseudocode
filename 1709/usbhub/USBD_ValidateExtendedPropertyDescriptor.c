/*
 * XREFs of USBD_ValidateExtendedPropertyDescriptor @ 0x1C0040150
 * Callers:
 *     UsbhInstallMsOsExtendedProperties @ 0x1C00409F4 (UsbhInstallMsOsExtendedProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBD_ValidateExtendedPropertyDescriptor(unsigned int *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  int v3; // r11d
  __int64 v4; // r9
  unsigned __int16 v5; // r10
  unsigned int *v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // r9
  unsigned int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  int v12; // ecx

  v2 = 0;
  v3 = 0;
  if ( a2 < 0xA )
    return (unsigned int)-1073741811;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v4 = *a1;
  if ( (unsigned int)v4 > a2 || (unsigned int)(v4 - 10) > 0xFF6 || *((_WORD *)a1 + 3) != 5 )
    return (unsigned int)-1073741811;
  v5 = *((_WORD *)a1 + 4);
  if ( v5 )
  {
    v6 = (unsigned int *)((char *)a1 + 10);
    v7 = (unsigned __int64)a1 + v4;
    while ( (unsigned __int64)v6 < v7 )
    {
      if ( (unsigned __int64)v6 + 14 > v7 )
        return (unsigned int)-1073741811;
      v8 = *v6;
      if ( (unsigned int)v8 > 0x7FFFFFFF )
        return (unsigned int)-1073741811;
      if ( (__int64)(v7 - (_QWORD)v6) < (int)v8 )
        return (unsigned int)-1073741811;
      if ( (unsigned int)v8 < 0xE )
        return (unsigned int)-1073741811;
      v9 = v6[1];
      if ( !v9 )
        return (unsigned int)-1073741811;
      if ( v9 > 7 )
        return (unsigned int)-1073741811;
      v10 = *((unsigned __int16 *)v6 + 4);
      if ( (int)v10 + 14 > (unsigned int)v8 )
        return (unsigned int)-1073741811;
      if ( !*((_WORD *)v6 + 4) )
        return (unsigned int)-1073741811;
      if ( (v10 & 1) != 0 )
        return (unsigned int)-1073741811;
      if ( !*((_WORD *)v6 + 5) )
        return (unsigned int)-1073741811;
      if ( *((_WORD *)v6 + ((unsigned __int64)*((unsigned __int16 *)v6 + 4) >> 1) + 4) )
        return (unsigned int)-1073741811;
      v11 = *(unsigned int *)((char *)v6 + v10 + 10);
      if ( ~(_DWORD)v10 < v11 )
        return (unsigned int)-1073741811;
      v12 = v11 + v10;
      if ( (unsigned int)~v12 < 0xE || v12 + 14 > (unsigned int)v8 )
        return (unsigned int)-1073741811;
      if ( ++v3 == v5 )
        break;
      v6 = (unsigned int *)((char *)v6 + v8);
    }
    if ( v3 != v5 )
      return (unsigned int)-1073741811;
  }
  return v2;
}
