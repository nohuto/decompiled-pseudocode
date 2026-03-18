/*
 * XREFs of sub_140718340 @ 0x140718340
 * Callers:
 *     <none>
 * Callees:
 *     ExpLicUpdateChecksum @ 0x14006B3D0 (ExpLicUpdateChecksum.c)
 *     ExpGetKernelDataProtection @ 0x1404AE3CC (ExpGetKernelDataProtection.c)
 *     ExpSetKernelDataProtection @ 0x1404AE780 (ExpSetKernelDataProtection.c)
 *     sub_140717EA8 @ 0x140717EA8 (sub_140717EA8.c)
 */

__int64 __fastcall sub_140718340(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, _BYTE *a5)
{
  int v9; // ebx
  int KernelDataProtection; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  signed int updated; // ecx
  unsigned __int64 v14; // rax
  unsigned int v15; // ecx
  __int128 v17; // [rsp+38h] [rbp-21h] BYREF
  __int128 v18; // [rsp+48h] [rbp-11h]
  __int128 v19; // [rsp+58h] [rbp-1h]
  _OWORD v20[3]; // [rsp+68h] [rbp+Fh] BYREF

  if ( Data )
  {
    KernelDataProtection = ExpGetKernelDataProtection(v20);
    if ( KernelDataProtection < 0 )
    {
      v9 = 4;
      if ( KernelDataProtection == -1073741275 )
      {
        LOBYTE(v11) = -1;
        if ( Data )
        {
          *(_QWORD *)&v17 = 0LL;
          v18 = 0uLL;
          *(_QWORD *)&v19 = 0LL;
          DWORD2(v17) = 4;
          BYTE8(v19) = 1;
          updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v17);
          if ( updated )
            goto LABEL_12;
          if ( (_DWORD)v12 )
          {
            v14 = 16LL * (unsigned int)v12;
            updated = v11 < v14 ? 0xC0000095 : 0;
            if ( v14 <= v11 )
              updated = ExpLicUpdateChecksum((__int64)qword_1407AE4B0, v12, &v17);
            if ( updated )
            {
LABEL_12:
              *(_QWORD *)&v17 = 0LL;
              updated = 0;
              DWORD2(v17) = 4;
            }
          }
          v20[0] = v17;
          v20[1] = v18;
          v20[2] = v19;
        }
        else
        {
          updated = -1073741811;
        }
        if ( updated >= 0 )
        {
          DWORD2(v20[0]) = 4;
          ExpSetKernelDataProtection((__int64)v20, v11, 0);
        }
      }
    }
    else
    {
      v9 = DWORD2(v20[0]);
    }
  }
  else
  {
    v9 = dword_1407AC0D4;
  }
  if ( v9 )
  {
    *a5 = 1;
    return (unsigned int)sub_140717EA8(a1, a2, a3, a4, 0);
  }
  else
  {
    v15 = -1073741772;
    *a5 = 0;
  }
  return v15;
}
