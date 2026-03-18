/*
 * XREFs of sfac_Classify @ 0x1C02C2DF4
 * Callers:
 *     sfac_DoOffsetTableMap @ 0x1C02C36B4 (sfac_DoOffsetTableMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sfac_Classify(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // rcx

  result = _byteswap_ulong(*a2);
  if ( (unsigned int)result > 0x676C7966 )
  {
    switch ( (_DWORD)result )
    {
      case 0x68646D78:
        v4 = 11;
        break;
      case 0x68656164:
        v4 = 0;
        break;
      case 0x68686561:
        v4 = 1;
        break;
      case 0x686D7478:
        v4 = 7;
        break;
      case 0x6C6F6361:
        v4 = 2;
        break;
      case 0x6D617870:
        v4 = 3;
        break;
      case 0x70726570:
        v4 = 5;
        break;
      case 0x76686561:
        v4 = 19;
        break;
      case 0x766D7478:
        v4 = 20;
        break;
      default:
        return result;
    }
  }
  else
  {
    switch ( (_DWORD)result )
    {
      case 0x676C7966:
        v4 = 6;
        break;
      case 0x45424454:
        v4 = 16;
        break;
      case 0x45424C43:
        v4 = 17;
        break;
      case 0x45425343:
        v4 = 18;
        break;
      case 0x4C545348:
        v4 = 12;
        break;
      case 0x4F532F32:
        v4 = 14;
        break;
      case 0x636D6170:
        v4 = 8;
        break;
      case 0x63767420:
        v4 = 4;
        break;
      case 0x6670676D:
        v4 = 9;
        break;
      case 0x67646972:
        v4 = 15;
        break;
      default:
        return result;
    }
  }
  v5 = v4;
  *(_DWORD *)(a1 + 8LL * v4) = _byteswap_ulong(a2[2]);
  result = _byteswap_ulong(a2[3]);
  *(_DWORD *)(a1 + 8 * v5 + 4) = result;
  return result;
}
