/*
 * XREFs of MiFindEmptyAddressRange @ 0x140513B70
 * Callers:
 *     MiSelectUserAddress @ 0x1405126A0 (MiSelectUserAddress.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x14056C3D8 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     RtlFindClearBits @ 0x14009B310 (RtlFindClearBits.c)
 *     MiFindEmptyAddressRangeInTree @ 0x140447274 (MiFindEmptyAddressRangeInTree.c)
 *     MiExpandVadBitMap @ 0x14049E24C (MiExpandVadBitMap.c)
 */

__int64 __fastcall MiFindEmptyAddressRange(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned int a5,
        _QWORD *a6,
        _DWORD *a7)
{
  int v7; // ebp
  _KPROCESS *v11; // r11
  _QWORD *v12; // r10
  _QWORD *v13; // rdi
  unsigned int v14; // r8d
  __int64 v15; // rdx
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  ULONG v19; // eax
  int v20; // esi
  ULONG ClearBits; // edx
  __int64 result; // rax
  unsigned __int64 v23; // rcx
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // r9d
  unsigned __int64 v27; // r8
  ULONG v28; // ecx
  ULONG v29; // r10d
  _DWORD *v30; // r9
  unsigned int i; // eax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rbx
  __int64 v34; // rax
  unsigned __int64 *v35; // rdi
  _KPROCESS *Process; // [rsp+30h] [rbp-38h]
  unsigned int v37; // [rsp+78h] [rbp+10h]
  unsigned int v38; // [rsp+90h] [rbp+28h]

  v7 = 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = Process;
  *a7 = 1;
  v12 = (_QWORD *)(*(_QWORD *)&Process[1].IdealGlobalNode + 40LL);
  v13 = &v12[5 * ((unsigned __int64)a5 >> 31)];
  if ( (a4 & 2) != 0 )
  {
    v23 = Process[1].ActiveProcessors.Bitmap[18];
    v14 = (unsigned __int8)*((_DWORD *)v13 + 9);
    v15 = *v12 >> 16;
    v37 = v15;
    v38 = v14;
    if ( v23 > 0x100000000LL )
    {
      LODWORD(v15) = (v23 >> 16) - (unsigned __int8)v15 - 1;
      v37 = v15;
    }
    if ( !(unsigned __int8)*((_DWORD *)v13 + 9) )
    {
      v14 = 1;
      v38 = 1;
    }
  }
  else
  {
    v14 = 0;
    v7 = 0;
    LODWORD(v15) = 0;
    v38 = 0;
    v37 = 0;
  }
  v16 = 0x10000LL;
  switch ( a2 )
  {
    case 0x1000uLL:
      goto LABEL_42;
    case 0x10000uLL:
      v17 = a1 + 0xFFFF;
      break;
    case 0x200000uLL:
    case 0x40000000uLL:
      v17 = a1;
      break;
    default:
      goto LABEL_42;
  }
  v18 = v17 >> 16;
  if ( a3 >= ((unsigned __int64)*(unsigned int *)(*(_QWORD *)&Process[1].IdealGlobalNode + 132LL) << 16) + 0xFFFF )
  {
    while ( 1 )
    {
      v19 = *((_DWORD *)v13 + 6);
      if ( (_DWORD)v18 != 1 && (unsigned int)v18 >= *((_DWORD *)v13 + 7) )
        v19 = *((_DWORD *)v13 + 8);
      v20 = *((_DWORD *)v13 + 4) - qword_14036C5C8;
      if ( v7 == 1 )
      {
        v24 = v19 + 8 * v20;
        if ( v24 < v14 || v24 >= (unsigned int)v15 )
        {
          v19 = v14;
          *a7 = 0;
        }
      }
      if ( a2 == 0x10000 )
      {
        ClearBits = RtlFindClearBits((PRTL_BITMAP)(v13 + 1), v18, v19);
      }
      else
      {
        v26 = *((_DWORD *)v13 + 2);
        v27 = a2 >> 16;
        ClearBits = -1;
        if ( (unsigned int)v18 < v26 )
        {
          v28 = a2 >> 16;
          v29 = v26 - v18;
          if ( v19 > (unsigned int)v27 && v19 < v26 )
            v28 = ~(v27 - 1) & (v19 + v27 - 1);
          if ( v28 <= v29 )
          {
            while ( 1 )
            {
              v30 = (_DWORD *)(v13[2] + 4 * ((unsigned __int64)v28 >> 5));
              for ( i = 0; i < (unsigned int)v18; ++v30 )
              {
                if ( *v30 )
                  break;
                i += 32;
              }
              if ( i == (_DWORD)v18 )
                break;
              v28 = v27 + (~(v27 - 1) & (i + v28));
              if ( v28 > v29 )
                goto LABEL_11;
            }
            ClearBits = v28;
          }
        }
      }
LABEL_11:
      if ( ClearBits != -1 )
      {
        if ( v7 != 1 || (v25 = ClearBits + 8 * v20, v25 >= v38) && v25 < v37 )
        {
          *a6 = (ClearBits + 8 * (v13[2] - qword_14036C5C8)) << 16;
          return 0LL;
        }
      }
      if ( (unsigned int)MiExpandVadBitMap((unsigned int *)v13 + 2, v18) != 1 )
        break;
      LODWORD(v15) = v37;
      v14 = v38;
    }
    if ( v7 == 1 )
      return 3221225495LL;
    LODWORD(v15) = v37;
    v14 = v38;
    v11 = Process;
  }
LABEL_42:
  *a7 = 0;
  if ( v7 == 1 && a3 > (unsigned __int64)(unsigned int)v15 << 16 )
    a3 = (unsigned __int64)(unsigned int)v15 << 16;
  v32 = v13[5];
  v33 = v32;
  if ( v32 > a3 )
  {
    if ( (v11[1].DirectoryTableBase & 0x2000000) == 0 || (v34 = 0x3FFFFFFFLL, a3 <= 0x3FFFFFFF) )
      v34 = 0xFFFFFFLL;
    v33 = v34 & v32;
    if ( (v34 & v32) == 0 || v33 > a3 )
      v33 = 0x10000LL;
    if ( v7 == 1 && v33 < v32 )
      v33 = (unsigned __int64)v14 << 16;
  }
  v35 = &v11[2].Affinity.Bitmap[4];
  result = MiFindEmptyAddressRangeInTree((_QWORD **)&v11[2].Affinity.Bitmap[4], a1, a2, v33, a3, a6);
  if ( (int)result < 0 )
  {
    if ( v7 == 1 )
      v16 = (unsigned __int64)v38 << 16;
    if ( v16 < v33 )
      return MiFindEmptyAddressRangeInTree((_QWORD **)v35, a1, a2, v16, a3, a6);
  }
  return result;
}
