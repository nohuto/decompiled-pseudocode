/*
 * XREFs of ?v_GetAdditionalDataSizeMax@CImmersiveWindowFactoryBase@@EEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x1801DFDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveWindowFactoryBase::v_GetAdditionalDataSizeMax(
        CImmersiveWindowFactoryBase *this,
        const struct _GUID *a2,
        void *a3,
        __int64 a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  int v7; // r11d
  unsigned int v8; // r9d
  unsigned int v9; // edx
  unsigned int v10; // eax
  signed int v11; // r8d
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  __int64 result; // rax

  *a7 = 0;
  v7 = -1;
  v8 = -1;
  v9 = *((_BYTE *)this + 160) != 0 ? 27 : 23;
  v10 = *((_BYTE *)this + 160) != 0 ? 28 : 24;
  if ( v10 >= v9 )
    v8 = *((_BYTE *)this + 160) != 0 ? 28 : 24;
  v11 = v10 < v9 ? 0x80070216 : 0;
  if ( v10 >= v9 && *((_BYTE *)this + 168) )
  {
    v12 = v8 + 4;
    v13 = v8;
    if ( v8 + 4 >= v8 )
      v7 = v8 + 4;
    v8 = v7;
    v11 = v12 < v13 ? 0x80070216 : 0;
  }
  v14 = *a7;
  result = (unsigned int)v11;
  if ( v11 >= 0 )
    v14 = v8;
  *a7 = v14;
  return result;
}
