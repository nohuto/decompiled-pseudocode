/*
 * XREFs of ?ComputeDisplayBounds@CDisplaySet@@AEAAXXZ @ 0x1800985D0
 * Callers:
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x180010940 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDisplaySet::ComputeDisplayBounds(CDisplaySet *this)
{
  __int64 i; // r9
  int v3; // r11d
  _DWORD *v4; // r8
  BOOL v5; // r10d
  int v6; // ecx
  BOOL v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 18); i = (unsigned int)(i + 1) )
  {
    v3 = *((_DWORD *)this + 6);
    v4 = *(_DWORD **)(*((_QWORD *)this + 6) + 8 * i);
    v5 = *((_DWORD *)this + 8) <= v3 || *((_DWORD *)this + 9) <= *((_DWORD *)this + 7);
    v6 = v4[24];
    v7 = v4[26] <= v6 || v4[27] <= v4[25];
    if ( v5 )
    {
      if ( v7 )
      {
        *((_DWORD *)this + 9) = 0;
        *((_DWORD *)this + 8) = 0;
        *((_DWORD *)this + 7) = 0;
        *((_DWORD *)this + 6) = 0;
      }
      else
      {
        *(_OWORD *)((char *)this + 24) = *((_OWORD *)v4 + 6);
      }
    }
    else if ( !v7 )
    {
      if ( v6 < v3 )
        *((_DWORD *)this + 6) = v6;
      v8 = v4[25];
      if ( v8 < *((_DWORD *)this + 7) )
        *((_DWORD *)this + 7) = v8;
      v9 = v4[26];
      if ( v9 > *((_DWORD *)this + 8) )
        *((_DWORD *)this + 8) = v9;
      v10 = v4[27];
      if ( v10 > *((_DWORD *)this + 9) )
        *((_DWORD *)this + 9) = v10;
    }
  }
}
