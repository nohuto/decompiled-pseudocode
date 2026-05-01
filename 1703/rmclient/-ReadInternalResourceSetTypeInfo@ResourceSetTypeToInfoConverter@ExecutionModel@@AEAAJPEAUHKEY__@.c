/*
 * XREFs of ?ReadInternalResourceSetTypeInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@AEAAJPEAUHKEY__@@KPEBGN@Z @ 0x180006EC0
 * Callers:
 *     ?Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z @ 0x180006C40 (-Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceSetTypeToInfoConverter::ReadInternalResourceSetTypeInfo(
        ExecutionModel::ResourceSetTypeToInfoConverter *this,
        HKEY a2,
        int a3,
        const unsigned __int16 *a4,
        double a5)
{
  unsigned __int64 v5; // r12
  int *v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // r13d
  unsigned int v11; // edi
  wchar_t **v12; // rbx
  const WCHAR *v13; // rdx
  BYTE *lpData; // r14
  HKEY v15; // rbp
  LSTATUS v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  double v20; // xmm0_8
  double v21; // xmm0_8
  bool v22; // cf
  int v23; // eax
  char v24; // cl
  unsigned __int64 v25; // rax
  __int64 v27; // rdx
  HKEY phkResult; // [rsp+70h] [rbp+8h] BYREF
  DWORD cbData; // [rsp+80h] [rbp+18h] BYREF

  v5 = (unsigned int)a3;
  v7 = (int *)((char *)this + 376 * (unsigned int)a3);
  *v7 = a3;
  if ( (a3 >= 26 || a3 < 14) && (a3 < 42 || a3 >= 52) )
  {
    switch ( a3 )
    {
      case 0:
      case 5:
      case 6:
      case 7:
      case 26:
      case 30:
      case 32:
      case 33:
      case 34:
      case 41:
      case 52:
        *((_WORD *)v7 + 8) &= 0xFFE9u;
        *((_WORD *)v7 + 8) |= 0x69u;
        break;
      case 11:
        v7[11] &= ~1u;
        v7[11] |= 2u;
        break;
      case 12:
      case 13:
      case 35:
      case 36:
      case 39:
      case 40:
        *((_WORD *)v7 + 20) |= 8u;
        break;
      default:
        break;
    }
  }
  v8 = *v7;
  v9 = 0x24704100001LL;
  if ( (unsigned int)v8 <= 0x29 && _bittest64(&v9, v8) )
    *((_BYTE *)v7 + 42) |= 0x20u;
  v10 = 0;
  phkResult = 0LL;
  RegOpenKeyW(a2, a4, &phkResult);
  v11 = 0;
  v12 = &off_18000F9A8;
  do
  {
    v13 = *v12;
    lpData = (BYTE *)v7 + *((unsigned int *)v12 - 2);
    v15 = phkResult;
    cbData = 4;
    v16 = RegQueryValueExW(a2, v13, 0LL, 0LL, lpData, &cbData);
    if ( v16 )
    {
      if ( v15 )
        v16 = RegQueryValueExW(v15, *v12, 0LL, 0LL, lpData, &cbData);
      if ( v16 )
      {
        if ( !*((_BYTE *)v12 + 8) )
        {
          v10 = -2147024809;
          goto LABEL_25;
        }
        *(_DWORD *)lpData = *((_DWORD *)v12 + 3);
      }
    }
    ++v11;
    v12 += 3;
  }
  while ( v11 < 0xB );
  v17 = v7[2];
  v7[26] = v17;
  v7[32] = v17;
  v7[38] = v17;
  if ( !*((_QWORD *)v7 + 15) )
  {
    if ( (unsigned int)v5 > 0x38 || (v18 = 0x100002002000400LL, !_bittest64(&v18, v5)) )
    {
      *((_QWORD *)v7 + 15) = *((_QWORD *)v7 + 9);
      v7[28] = 1;
    }
  }
  v19 = *((_QWORD *)v7 + 9);
  v7[93] = v7[93] & 0xFFFBFFFF | ((v19 != *((_QWORD *)v7 + 15)) << 18);
  v20 = (double)(int)v19;
  if ( v19 < 0 )
    v20 = v20 + 1.844674407370955e19;
  v21 = v20 * a5;
  v7[8] = v7[2];
  *((_WORD *)v7 + 20) &= ~2u;
  v22 = v7[20] != 0;
  *((_QWORD *)v7 + 3) = v19;
  v23 = v7[93];
  *((_QWORD *)v7 + 45) = (unsigned int)(int)v21;
  *((_WORD *)v7 + 20) |= v22 ? 2 : 0;
  if ( (v23 & 0x20000) != 0 )
  {
    *((_BYTE *)v7 + 42) &= ~4u;
    *((_BYTE *)v7 + 42) |= 3u;
  }
  else if ( (v23 & 0x10000) != 0 )
  {
    *((_BYTE *)v7 + 42) &= 0xFAu;
    *((_BYTE *)v7 + 42) |= 2u;
  }
  else
  {
    v24 = *((_BYTE *)v7 + 42);
    if ( (v24 & 0x20) != 0 || (v25 = *v7, (unsigned int)v25 <= 0x29) && (v27 = 0x24704100001LL, _bittest64(&v27, v25)) )
      *((_BYTE *)v7 + 42) = v24 & 0xF8 | 1;
  }
LABEL_25:
  if ( phkResult )
    RegCloseKey(phkResult);
  return v10;
}
