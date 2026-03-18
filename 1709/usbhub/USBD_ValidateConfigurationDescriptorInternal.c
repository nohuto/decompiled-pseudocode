/*
 * XREFs of USBD_ValidateConfigurationDescriptorInternal @ 0x1C003FB00
 * Callers:
 *     UsbhValidateConfigurationDescriptor @ 0x1C0022C40 (UsbhValidateConfigurationDescriptor.c)
 * Callees:
 *     memset @ 0x1C0029840 (memset.c)
 */

__int64 __fastcall USBD_ValidateConfigurationDescriptorInternal(
        unsigned __int8 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int8 **a4)
{
  unsigned __int8 **v4; // rsi
  int v6; // ebx
  unsigned __int8 *PoolWithTag; // r14
  PVOID v8; // r12
  unsigned __int8 *v9; // rdi
  unsigned __int8 *v10; // r15
  unsigned int v11; // ecx
  int v12; // edx
  unsigned __int8 *v13; // rsi
  unsigned __int64 v14; // r13
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rcx
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // r15
  char v21; // [rsp+70h] [rbp+18h]
  __int16 v23; // [rsp+80h] [rbp+28h]

  v4 = a4;
  v23 = 0;
  v6 = 0;
  PoolWithTag = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v21 = 1;
  if ( a1 && a2 >= 9 && a4 )
  {
    if ( *a1 < 9u )
    {
      v6 = -1072693247;
LABEL_6:
      v9 = a1;
LABEL_34:
      *v4 = v9;
      return (unsigned int)v6;
    }
    if ( a1[1] != 2 )
    {
      v6 = -1072693246;
      v9 = a1 + 1;
      goto LABEL_34;
    }
    v10 = a1 + 2;
    v11 = *((unsigned __int16 *)a1 + 1);
    if ( v11 > a2 || (v12 = a1[4], v11 < 9 * (v12 + 1)) )
    {
      v6 = -1072693242;
      v9 = v10;
    }
    else
    {
      if ( !(_BYTE)v12 )
        goto LABEL_64;
      PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x204uLL, 0x42554855u);
      if ( !PoolWithTag )
      {
        v6 = -1073737728;
        goto LABEL_6;
      }
      v8 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x100uLL, 0x42554855u);
      if ( v8 )
      {
        memset(PoolWithTag, 0, 0x204uLL);
        memset(v8, 0, 0x100uLL);
        v13 = a1 + 9;
        v14 = (unsigned __int64)&a1[*(unsigned __int16 *)v10];
        if ( (unsigned __int64)(a1 + 9) < v14 )
        {
          while ( 1 )
          {
            if ( v14 - (unsigned __int64)v13 < 2 )
            {
              v6 = -1072693248;
              goto LABEL_27;
            }
            v15 = *v13;
            if ( (unsigned __int64)&v13[v15] > v14 )
              goto LABEL_59;
            switch ( v13[1] )
            {
              case 4u:
                if ( (_BYTE)v15 != 9 )
                {
LABEL_59:
                  v6 = -1072693247;
                  goto LABEL_27;
                }
                v18 = v13[2];
                v19 = v13[3];
                if ( v21 )
                {
                  if ( v19 )
                    goto LABEL_46;
                  *PoolWithTag = v18;
                  ++v23;
                  *(_WORD *)(PoolWithTag + 1) = 256;
                  PoolWithTag[514] = v13[4];
                  PoolWithTag[515] = 0;
                  v21 = 0;
                  *((_BYTE *)v8 + v18) = 1;
                }
                else
                {
                  if ( v18 == *PoolWithTag )
                  {
                    if ( PoolWithTag[v19 + 2] == 1 || PoolWithTag[1] >= v19 )
                    {
LABEL_46:
                      v6 = -1072693245;
                      v9 = v13 + 3;
                      goto LABEL_28;
                    }
                  }
                  else
                  {
                    if ( *((_BYTE *)v8 + v18) == 1 || *PoolWithTag > v18 )
                    {
                      v6 = -1072693245;
                      v9 = v13 + 2;
                      goto LABEL_28;
                    }
                    if ( v19 )
                      goto LABEL_46;
                    ++v23;
                    *((_BYTE *)v8 + v18) = 1;
                    *PoolWithTag = v18;
                    memset(PoolWithTag + 2, 0, 0x100uLL);
                  }
                  if ( PoolWithTag[515] != PoolWithTag[514] )
                  {
                    v6 = -1072693240;
                    goto LABEL_27;
                  }
                  memset(PoolWithTag + 258, 0, 0x100uLL);
                  PoolWithTag[515] = 0;
                  PoolWithTag[514] = v13[4];
                  PoolWithTag[v19 + 2] = 1;
                  PoolWithTag[1] = v19;
                }
                break;
              case 5u:
                if ( (_BYTE)v15 != 7 )
                  goto LABEL_59;
                if ( v21 )
                {
                  v6 = -1072693244;
                  goto LABEL_27;
                }
                v17 = v13[2];
                if ( PoolWithTag[v17 + 258] )
                {
                  v6 = -1072693239;
                  v9 = v13 + 2;
                  goto LABEL_28;
                }
                PoolWithTag[v17 + 258] = 1;
                ++PoolWithTag[515];
                break;
              case 0xBu:
                if ( (_BYTE)v15 != 8
                  || (v16 = v13[3], v16 + (unsigned int)v13[2] > 0x100)
                  || (unsigned __int8)v16 > a1[4]
                  || !(_BYTE)v16 )
                {
                  v6 = -1072693243;
LABEL_27:
                  v9 = v13;
                  goto LABEL_28;
                }
                break;
            }
            if ( *v13 )
            {
              v13 += *v13;
              if ( (unsigned __int64)v13 < v14 )
                continue;
            }
            break;
          }
        }
        if ( v23 != a1[4] )
        {
          v6 = -1072693241;
          v9 = a1;
        }
LABEL_28:
        v4 = a4;
      }
      else
      {
        v9 = a1;
        v6 = -1073737728;
      }
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    if ( v6 < 0 )
      goto LABEL_34;
LABEL_64:
    *v4 = 0LL;
    return (unsigned int)v6;
  }
  return 3221237760LL;
}
