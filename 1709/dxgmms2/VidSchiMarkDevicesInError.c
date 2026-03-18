/*
 * XREFs of VidSchiMarkDevicesInError @ 0x1C00B3410
 * Callers:
 *     VidSchiResetEngine @ 0x1C0029078 (VidSchiResetEngine.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C000F4C8 (VidSchiMarkDeviceAsError.c)
 *     McTemplateK0ppqpttq @ 0x1C00260AC (McTemplateK0ppqpttq.c)
 */

_UNKNOWN **__fastcall VidSchiMarkDevicesInError(__int64 *a1, _BYTE *a2, __int64 *a3)
{
  _UNKNOWN **result; // rax
  __int64 v4; // rbp
  unsigned int v6; // edi
  __int64 i; // r13
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // edx
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // [rsp+28h] [rbp-40h]
  __int64 v18; // [rsp+38h] [rbp-30h]
  __int64 v19; // [rsp+40h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = *a1;
  v6 = *((_DWORD *)a1 + 12);
  *a2 = 0;
  for ( i = *(_QWORD *)(v4 + 24); v6 != *((_DWORD *)a1 + 13); v6 = ((_BYTE)v6 + 1) & 0xF )
  {
    result = (_UNKNOWN **)v6;
    v10 = *(_QWORD *)(v4 + 8LL * v6 + 1416);
    v11 = *(_DWORD *)(v10 + 88);
    if ( v11 != 3 )
    {
      result = (_UNKNOWN **)a1[5];
      if ( *(_QWORD *)(v10 + 104) > (unsigned __int64)result )
        return result;
      if ( v11 )
      {
        if ( v11 == 1 )
          goto LABEL_18;
      }
      else
      {
        result = *(_UNKNOWN ***)(v10 + 48);
        v12 = (__int64)result[13];
        if ( !*(_BYTE *)(v12 + 164) )
        {
          if ( bTracingEnabled )
          {
            v13 = *(_QWORD *)(v12 + 8);
            v14 = v13 ? *(_DWORD *)(v13 + 328) : -1;
            if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            {
              v15 = *(_DWORD *)(v12 + 48);
              LODWORD(v19) = (v15 >> 2) & 1;
              LODWORD(v18) = (v15 >> 1) & 1;
              LODWORD(v17) = v14;
              McTemplateK0ppqpttq(
                (unsigned int)v18,
                &EventReportDevice,
                (__int64)a3,
                0LL,
                *(_QWORD *)(i + 16),
                v17,
                v12,
                v18,
                v19);
            }
          }
          if ( *(_QWORD *)(i + 2848) == v4 && !*a3 )
          {
            v16 = *(_QWORD *)(v12 + 40);
            if ( v16 )
            {
              if ( *(_QWORD *)(v16 + 8) )
                *a3 = v12;
            }
          }
          *(_BYTE *)(v12 + 164) = 1;
          VidSchiMarkDeviceAsError(v12, 7);
          result = (_UNKNOWN **)*(unsigned int *)(v12 + 48);
          if ( ((unsigned __int8)result & 8) != 0 )
          {
LABEL_18:
            *a2 = 1;
            return result;
          }
        }
      }
    }
  }
  return result;
}
