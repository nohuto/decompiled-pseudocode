/*
 * XREFs of MenuRecalc @ 0x1C020D994
 * Callers:
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01B5434 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 MenuRecalc()
{
  unsigned int v0; // r9d
  __int64 *v1; // r10
  __int64 result; // rax
  _BYTE *v3; // r8
  __int64 v4; // rdx
  unsigned int v5; // r11d
  __int64 v6; // rax
  __int64 v7; // rcx

  v0 = 0;
  v1 = (__int64 *)gpKernelHandleTable;
  result = gSharedInfo[0];
  v3 = (_BYTE *)(gSharedInfo[1] + 24LL);
  do
  {
    if ( *v3 == 2 )
    {
      v4 = *v1;
      v5 = 0;
      *(_DWORD *)(v4 + 72) = 0;
      for ( *(_DWORD *)(v4 + 76) = 0; v5 < *(_DWORD *)(v4 + 68); *(_DWORD *)(result + v7 + 112) = -1 )
      {
        v6 = v5++;
        v7 = 152 * v6;
        *(_DWORD *)(*(_QWORD *)(v4 + 96) + v7 + 92) = 0x7FFFFFFF;
        *(_DWORD *)(*(_QWORD *)(v4 + 96) + v7 + 96) = 0;
        result = *(_QWORD *)(v4 + 96);
      }
    }
    ++v0;
    v3 += 32;
    v1 += 2;
  }
  while ( v0 <= giheLast );
  return result;
}
