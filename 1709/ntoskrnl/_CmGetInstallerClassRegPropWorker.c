/*
 * XREFs of _CmGetInstallerClassRegPropWorker @ 0x14051D0E8
 * Callers:
 *     _CmGetInstallerClassRegProp @ 0x14051D640 (_CmGetInstallerClassRegProp.c)
 * Callees:
 *     _MapCmClassPropertyToRegValue @ 0x1400DE664 (_MapCmClassPropertyToRegValue.c)
 *     _CmClassPropertyRead @ 0x1400DE6D4 (_CmClassPropertyRead.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     _CmOpenInstallerClassRegKey @ 0x14051D7B8 (_CmOpenInstallerClassRegKey.c)
 *     _PnpOpenPropertiesKey @ 0x14051FA08 (_PnpOpenPropertiesKey.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x1405229BC (_PnpCtxRegQueryValueIndirect.c)
 */

__int64 __fastcall CmGetInstallerClassRegPropWorker(
        __int64 a1,
        __int64 a2,
        void *a3,
        int a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int *a7,
        unsigned int a8)
{
  int v8; // ebx
  unsigned int v11; // r13d
  __int64 v12; // r15
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // r10
  const wchar_t *v18; // rax
  int ValueIndirect; // eax
  int v21; // edx
  HANDLE v22; // rdx
  int v23; // [rsp+20h] [rbp-40h]
  int v24; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  HANDLE v26; // [rsp+50h] [rbp-10h]

  v8 = 0;
  Handle = 0LL;
  v26 = 0LL;
  v24 = 0;
  if ( (_WORD)a8 )
    return (unsigned int)-1073741811;
  if ( !a7 || !a5 )
  {
    v8 = -1073741811;
    goto LABEL_20;
  }
  v11 = *a7;
  if ( !*a7 )
  {
    v12 = 0LL;
    goto LABEL_6;
  }
  v12 = a6;
  if ( !a6 )
    return (unsigned int)-1073741811;
LABEL_6:
  *a7 = 0;
  *a5 = 0;
  if ( (unsigned int)(a4 - 1) > 0x24 || !CmClassPropertyRead(a4) )
    return (unsigned int)-1073741264;
  if ( a3 )
  {
LABEL_11:
    if ( a4 == 8 || a4 == 13 || a4 <= 19 && a4 > 17 )
    {
      if ( !a3 )
        LODWORD(a3) = (_DWORD)Handle;
    }
    else
    {
      v22 = Handle;
      LOBYTE(v23) = 0;
      if ( a3 )
        v22 = a3;
      v8 = PnpOpenPropertiesKey(v17, v22, 0LL, 1LL, v23);
      if ( v8 < 0 )
      {
LABEL_19:
        v8 = -1073741275;
        goto LABEL_20;
      }
      LODWORD(a3) = (_DWORD)v26;
    }
    v18 = MapCmClassPropertyToRegValue(v14, a4);
    if ( !v18 )
    {
      v8 = -1073741264;
      goto LABEL_20;
    }
    a8 = v11;
    ValueIndirect = PnpCtxRegQueryValueIndirect(a1, (_DWORD)a3, (_DWORD)v18, (unsigned int)&v24, v12, (__int64)&a8, 0LL);
    if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
    {
      if ( (int)(ValueIndirect + 0x80000000) >= 0 && ValueIndirect != -1073741789 )
      {
        v8 = ValueIndirect;
        goto LABEL_20;
      }
      v21 = v24;
      if ( (v24 != 1 || a8 >= 2) && (v24 != 7 || a8 >= 2) && (v24 != 4 || a8 == 4) )
      {
        if ( a4 == 8 && a8 > 0x40 )
        {
          v8 = -1073741595;
        }
        else
        {
          *a7 = a8;
          *a5 = v21;
          if ( ValueIndirect || !v11 )
            v8 = -1073741789;
        }
        goto LABEL_20;
      }
    }
    goto LABEL_19;
  }
  v8 = CmOpenInstallerClassRegKey(v17, v13, v15, v16, 33554433, 0, (__int64)&Handle, 0LL);
  if ( v8 >= 0 )
  {
    v17 = a1;
    goto LABEL_11;
  }
LABEL_20:
  if ( v26 )
    ZwClose(v26);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v8;
}
