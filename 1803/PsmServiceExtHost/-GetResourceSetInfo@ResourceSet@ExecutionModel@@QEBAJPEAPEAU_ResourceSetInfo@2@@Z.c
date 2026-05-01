/*
 * XREFs of ?GetResourceSetInfo@ResourceSet@ExecutionModel@@QEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x18001F654
 * Callers:
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18001C5F4 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z @ 0x18005A9D4 (-CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18001E620 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18003E450 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::GetResourceSetInfo(
        ExecutionModel::ResourceSet *this,
        struct ExecutionModel::_ResourceSetInfo **a2)
{
  unsigned int v2; // ebx
  ExecutionModel::_ResourceSetInfo *v5; // rax
  ExecutionModel::_ResourceSetInfo *v6; // rcx
  __int64 v7; // rdx
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  _DWORD *v12; // rcx

  v2 = 0;
  if ( a2 )
  {
    v5 = (ExecutionModel::_ResourceSetInfo *)operator new(0x178uLL);
    if ( v5 )
      v6 = ExecutionModel::_ResourceSetInfo::_ResourceSetInfo(v5);
    else
      v6 = 0LL;
    *a2 = v6;
    if ( v6 )
    {
      v7 = 2LL;
      v8 = (_OWORD *)((char *)this + 1456);
      do
      {
        *(_OWORD *)v6 = *v8;
        *((_OWORD *)v6 + 1) = v8[1];
        *((_OWORD *)v6 + 2) = v8[2];
        *((_OWORD *)v6 + 3) = v8[3];
        *((_OWORD *)v6 + 4) = v8[4];
        *((_OWORD *)v6 + 5) = v8[5];
        *((_OWORD *)v6 + 6) = v8[6];
        v6 = (ExecutionModel::_ResourceSetInfo *)((char *)v6 + 128);
        v9 = v8[7];
        v8 += 8;
        *((_OWORD *)v6 - 1) = v9;
        --v7;
      }
      while ( v7 );
      *(_OWORD *)v6 = *v8;
      *((_OWORD *)v6 + 1) = v8[1];
      *((_OWORD *)v6 + 2) = v8[2];
      *((_OWORD *)v6 + 3) = v8[3];
      *((_OWORD *)v6 + 4) = v8[4];
      *((_OWORD *)v6 + 5) = v8[5];
      *((_OWORD *)v6 + 6) = v8[6];
      *((_QWORD *)v6 + 14) = *((_QWORD *)v8 + 14);
      v10 = *a2;
      *(_OWORD *)(v10 + 26) = *(_OWORD *)((char *)this + 216);
      *((_QWORD *)v10 + 15) = *((_QWORD *)this + 29);
      v11 = *a2;
      *((_OWORD *)v11 + 5) = *((_OWORD *)this + 12);
      *((_QWORD *)v11 + 12) = *((_QWORD *)this + 26);
      v12 = *a2;
      *((_OWORD *)v12 + 8) = *((_OWORD *)this + 15);
      *((_QWORD *)v12 + 18) = *((_QWORD *)this + 32);
      *((_DWORD *)*a2 + 92) = (*((_DWORD *)this + 363) >> 1) & 1;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v2;
}
