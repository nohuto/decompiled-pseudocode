/*
 * XREFs of ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02995C4
 * Callers:
 *     GreCreateDIBitmapReal @ 0x1C0047D58 (GreCreateDIBitmapReal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0080550 (GreSetDIBitsToDeviceInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C0093B84 (GreStretchDIBitsInternal.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00DADC0 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall XEPALOBJ::vGetEntriesFrom(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 result; // rax
  unsigned int v7; // esi
  unsigned int v8; // r11d
  unsigned int v9; // r9d
  unsigned __int16 *v10; // rbx
  __int64 v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF
  unsigned int v15; // [rsp+28h] [rbp+28h]

  result = (unsigned __int64)&retaddr;
  v7 = *(_DWORD *)(a2 + 28);
  if ( (*(_DWORD *)(a3 + 24) & 0x800) != 0 )
    v8 = *(_DWORD *)(a3 + 28);
  else
    v8 = 0;
  v9 = a5;
  if ( a5 )
  {
    v10 = (unsigned __int16 *)(a4 + 2LL * a5);
    v11 = 4LL * a5;
    do
    {
      --v10;
      --v9;
      v12 = *v10;
      v11 -= 4LL;
      if ( v12 >= v7 )
        v12 %= v7;
      v13 = *(_DWORD *)(*(_QWORD *)(a2 + 120) + 4LL * v12);
      v15 = v13;
      if ( HIBYTE(v13) == 2 )
      {
        if ( v8 )
        {
          v13 = (unsigned __int16)v13;
          if ( (unsigned __int16)v15 >= v8 )
            v13 = (unsigned __int16)v15 % v8;
          v15 = *(_DWORD *)(*(_QWORD *)(a3 + 120) + 4LL * v13);
        }
        else
        {
          v15 = apalVGA[v13 & 0xF];
        }
      }
      HIBYTE(v15) = 0;
      result = v15;
      *(_DWORD *)(v11 + *(_QWORD *)(*(_QWORD *)a1 + 120LL)) = v15;
    }
    while ( v9 );
  }
  return result;
}
