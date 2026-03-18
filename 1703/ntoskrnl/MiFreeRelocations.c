/*
 * XREFs of MiFreeRelocations @ 0x140581FD0
 * Callers:
 *     MiDeleteControlArea @ 0x140118FDC (MiDeleteControlArea.c)
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 * Callees:
 *     MiDeleteDirectMapFixupPfn @ 0x140220B00 (MiDeleteDirectMapFixupPfn.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiReturnImageBase @ 0x140513EE8 (MiReturnImageBase.c)
 *     MiFreeImageLoadConfig @ 0x14058207C (MiFreeImageLoadConfig.c)
 */

void __fastcall MiFreeRelocations(_DWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  bool v7; // zf
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  unsigned int v12[3]; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+2Ch] [rbp-Ch]
  char v14; // [rsp+2Dh] [rbp-Bh]

  if ( a2 )
  {
    v5 = (unsigned int)a1[23];
    v12[0] = a1[22];
    v12[1] = (unsigned __int16)v5;
    v7 = (a1[14] & 0x10000000) == 0;
    v12[2] = ((unsigned int)v5 >> 21) & 3;
    if ( v7 )
    {
      v13 = 0;
    }
    else
    {
      v5 = (unsigned int)v5 >> 17;
      LOBYTE(v5) = v5 & 1;
      v13 = 1;
      v14 = v5;
    }
    if ( a2[5] )
    {
      MiReturnImageBase(v12, v5, a3, a4);
      a1[22] = -1;
    }
    MiFreeImageLoadConfig(a2 + 9);
    v8 = (_QWORD *)a2[2];
    if ( v8 )
    {
      do
      {
        v10 = (_QWORD *)*v8;
        ExFreePoolWithTag(v8, 0);
        v8 = v10;
      }
      while ( v10 );
    }
    v9 = (_QWORD *)a2[11];
    while ( v9 )
    {
      v11 = (__int64)v9;
      v9 = (_QWORD *)*v9;
      MiDeleteDirectMapFixupPfn(v11);
    }
    ExFreePoolWithTag(a2, 0);
  }
}
