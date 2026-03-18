/*
 * XREFs of MenuRecalc @ 0x1C020F114
 * Callers:
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01B8680 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 MenuRecalc()
{
  unsigned int v0; // r9d
  __int64 *v1; // r10
  _BYTE *v2; // r8
  __int64 v3; // rdx
  unsigned int v4; // r11d
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax

  v0 = 0;
  v1 = (__int64 *)gpKernelHandleTable;
  v2 = (_BYTE *)(gSharedInfo[1] + 24LL);
  do
  {
    if ( *v2 == 2 )
    {
      v3 = *v1;
      v4 = 0;
      *(_DWORD *)(v3 + 72) = 0;
      for ( *(_DWORD *)(v3 + 76) = 0; v4 < *(_DWORD *)(v3 + 68); *(_DWORD *)(*(_QWORD *)(v3 + 96) + v6 + 112) = -1 )
      {
        v5 = v4++;
        v6 = 152 * v5;
        *(_DWORD *)(*(_QWORD *)(v3 + 96) + v6 + 92) = 0x7FFFFFFF;
        *(_DWORD *)(*(_QWORD *)(v3 + 96) + v6 + 96) = 0;
      }
    }
    result = giheLast;
    ++v0;
    v2 += 32;
    v1 += 3;
  }
  while ( v0 <= giheLast );
  return result;
}
