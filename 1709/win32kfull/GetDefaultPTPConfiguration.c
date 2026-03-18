/*
 * XREFs of GetDefaultPTPConfiguration @ 0x1C01F3420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct tagDEVICECONFIG_SETTING near **GetDefaultPTPConfiguration()
{
  return &gaTouchPadSettings;
}
