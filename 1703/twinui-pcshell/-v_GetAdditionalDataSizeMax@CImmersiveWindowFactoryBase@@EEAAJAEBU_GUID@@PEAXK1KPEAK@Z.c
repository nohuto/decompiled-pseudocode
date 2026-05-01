/*
 * XREFs of ?v_GetAdditionalDataSizeMax@CImmersiveWindowFactoryBase@@EEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x180191BF0
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
  unsigned int v7; // edx
  int v8; // r10d
  unsigned int v9; // r9d
  unsigned int v10; // eax
  signed int v11; // r8d
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  __int64 result; // rax

  v7 = 23;
  *a7 = 0;
  if ( *((_BYTE *)this + 104) )
    v7 = 27;
  v8 = -1;
  v9 = -1;
  v10 = v7 + 1;
  if ( v7 + 1 >= v7 )
    v9 = v7 + 1;
  v11 = v10 < v7 ? 0x80070216 : 0;
  if ( v10 >= v7 && *((_BYTE *)this + 112) )
  {
    v12 = v9 + 4;
    v13 = v9;
    if ( v9 + 4 >= v9 )
      v8 = v9 + 4;
    v9 = v8;
    v11 = v12 < v13 ? 0x80070216 : 0;
  }
  v14 = *a7;
  result = (unsigned int)v11;
  if ( v11 >= 0 )
    v14 = v9;
  *a7 = v14;
  return result;
}
